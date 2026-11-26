#!/usr/bin/env python3
"""Read a n1ssan minidump: exception record + faulting thread stack.

No debugger is installed on this machine, so this parses the MINIDUMP streams
directly (header, module list, thread list, exception stream). It prints the
faulting code, the accessed address (read/write), RIP/RSP, and then scans the
faulting thread's stack for return addresses that land inside a loaded module,
mapped to "module.dll+0xoffset". That is enough to name the CS2 function that
faulted and the frames that led there.

Usage: python tools/minidump-peek.py <dump.dmp> [--threads]
"""

import struct
import sys

MDMP_MAGIC = b"MDMP"

STREAM_THREAD_LIST = 3
STREAM_MODULE_LIST = 4
STREAM_EXCEPTION = 6
STREAM_MEMORY_LIST = 5

# x64 CONTEXT offsets.
CTX_RSP = 0x98
CTX_RBP = 0xA0
CTX_RIP = 0xF8

EXCEPTION_NAMES = {
    0xC0000005: "ACCESS_VIOLATION",
    0xC000001D: "ILLEGAL_INSTRUCTION",
    0xC0000094: "INT_DIVIDE_BY_ZERO",
    0xC00000FD: "STACK_OVERFLOW",
    0x80000003: "BREAKPOINT",
}


class Dump:
    def __init__(self, data):
        self.data = data
        if data[:4] != MDMP_MAGIC:
            raise SystemExit("not a minidump")
        (self.stream_count, self.dir_rva) = struct.unpack_from("<II", data, 8)
        self.streams = {}
        for i in range(self.stream_count):
            off = self.dir_rva + i * 12
            stype, size, rva = struct.unpack_from("<III", data, off)
            self.streams[stype] = (size, rva)
        self.modules = self._modules()
        self.threads = self._threads()

    # ---- streams -------------------------------------------------------
    def _modules(self):
        if STREAM_MODULE_LIST not in self.streams:
            return []
        _, rva = self.streams[STREAM_MODULE_LIST]
        count = struct.unpack_from("<I", self.data, rva)[0]
        out = []
        for i in range(count):
            # MINIDUMP_MODULE: BaseOfImage u64, SizeOfImage u32, CheckSum u32,
            # TimeDateStamp u32, ModuleNameRva u32, ...
            off = rva + 4 + i * 108
            base, size, _ck, _ts, name_rva = struct.unpack_from("<QIIII", self.data, off)
            out.append((base, size, self._string(name_rva)))
        out.sort()
        return out

    def _threads(self):
        if STREAM_THREAD_LIST not in self.streams:
            return []
        _, rva = self.streams[STREAM_THREAD_LIST]
        count = struct.unpack_from("<I", self.data, rva)[0]
        out = []
        for i in range(count):
            # MINIDUMP_THREAD: ThreadId u32, SuspendCount u32, PriorityClass u32,
            # Priority u32, Teb u64, Stack(MemoryDescriptor: StartOfMemoryRange u64,
            # DataSize u32, Rva u32), ThreadContext(DataSize u32, Rva u32)
            off = rva + 4 + i * 48
            tid, _sc, _pc, _pr, _teb, stack_start, _sd, stack_rva, _cs, ctx_rva = \
                struct.unpack_from("<IIIIQQIIII", self.data, off)
            out.append({
                "tid": tid,
                "stack_start": stack_start,
                "stack_rva": stack_rva,
                "stack_size": _sd,
                "ctx_rva": ctx_rva,
            })
        return out

    def _string(self, rva):
        # MINIDUMP_STRING: Length u32 (bytes, no terminator), then UTF-16.
        length = struct.unpack_from("<I", self.data, rva)[0]
        raw = self.data[rva + 4:rva + 4 + length]
        try:
            return raw.decode("utf-16-le")
        except UnicodeDecodeError:
            return raw.decode("latin-1", "replace")

    # ---- helpers -------------------------------------------------------
    def module_for(self, addr):
        for base, size, name in self.modules:
            if base <= addr < base + size:
                return name, addr - base
        return None, 0

    def ctx(self, rva):
        d = self.data
        return {
            "rip": struct.unpack_from("<Q", d, rva + CTX_RIP)[0],
            "rsp": struct.unpack_from("<Q", d, rva + CTX_RSP)[0],
            "rbp": struct.unpack_from("<Q", d, rva + CTX_RBP)[0],
        }

    def stack_words(self, thread, count=96):
        """Yield (address, value) from the thread's stack as recorded."""
        start = thread["stack_start"]
        data = self.data[thread["stack_rva"]:
                         thread["stack_rva"] + thread["stack_size"]]
        words = len(data) // 8
        for i in range(min(words, count)):
            yield start + i * 8, struct.unpack_from("<Q", data, i * 8)[0]


def fmt(addr):
    return "0x%016X" % addr


def main():
    if len(sys.argv) < 2:
        raise SystemExit(__doc__)
    with open(sys.argv[1], "rb") as f:
        dump = Dump(f.read())

    print("modules: %d  threads: %d" % (len(dump.modules), len(dump.threads)))
    for base, size, name in dump.modules:
        short = name.replace("\\", "/").rsplit("/", 1)[-1]
        print("  %-32s base=%s size=0x%X" % (short, fmt(base), size))

    if STREAM_EXCEPTION not in dump.streams:
        raise SystemExit("no exception stream")

    _, rva = dump.streams[STREAM_EXCEPTION]
    tid = struct.unpack_from("<I", dump.data, rva)[0]
    # MINIDUMP_EXCEPTION_STREAM: ThreadId u32, __alignment u32,
    # MINIDUMP_EXCEPTION (Code u32, Flags u32, Record u64, Address u64,
    #                     NumberParameters u32, __unused u32, Info[15] u64)
    code, flags, _rec, address, nparams = struct.unpack_from("<IIQQI", dump.data, rva + 8)
    info = struct.unpack_from("<15Q", dump.data, rva + 8 + 4 + 4 + 8 + 8 + 4 + 4)

    name = EXCEPTION_NAMES.get(code, "0x%08X" % code)
    mname, moff = dump.module_for(address)
    print("\nexception %s at %s (%s+0x%X)" %
          (name, fmt(address), mname or "unmapped", moff))

    if nparams >= 2 and code == 0xC0000005:
        op = "read" if info[0] == 0 else "write" if info[0] == 1 else \
             "execute" if info[0] == 8 else "op=%d" % info[0]
        bad = info[1]
        bname, boff = dump.module_for(bad)
        print("  %s of %s (%s+0x%X)" %
              (op, fmt(bad), bname or "unmapped", boff))

    thread = next((t for t in dump.threads if t["tid"] == tid), None)
    if not thread:
        raise SystemExit("faulting thread %d not in the dump" % tid)

    context = dump.ctx(thread["ctx_rva"])
    rip_name, rip_off = dump.module_for(context["rip"])
    print("  thread %d  rip=%s (%s+0x%X)  rsp=%s  rbp=%s" %
          (tid, fmt(context["rip"]), rip_name or "?", rip_off,
           fmt(context["rsp"]), fmt(context["rbp"])))

    print("\nstack (frame -> module+offset):")
    seen = 0
    for addr, value in dump.stack_words(thread, 128):
        if value < 0x10000:
            continue
        mname, moff = dump.module_for(value)
        if not mname:
            continue
        short = mname.replace("\\", "/").rsplit("/", 1)[-1]
        print("  [%s] %s  %s+0x%X" % (fmt(addr), fmt(value), short, moff))
        seen += 1
        if seen >= 40:
            break

    if "--threads" in sys.argv:
        print("\nall threads:")
        for t in dump.threads:
            c = dump.ctx(t["ctx_rva"])
            mname, moff = dump.module_for(c["rip"])
            print("  tid=%-6d rip=%s+0x%X" %
                  (t["tid"], (mname or "?").rsplit("/", 1)[-1], moff))


if __name__ == "__main__":
    main()
