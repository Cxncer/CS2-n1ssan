# n1ssan DLL status contract

Protocol version: 1

## Status snapshot

The DLL publishes the latest status atomically to:

`%LOCALAPPDATA%\\n1ssan\\status\\cs2-<process-id>.status`

If `LOCALAPPDATA` is unavailable, it falls back to the current user's temporary directory.

Each snapshot is one UTF-8 line:

`N1SSAN_STATUS|1|<UTC ISO-8601 timestamp>|<PID>|<build-id>|<state>|reason=<reason>`

Fields containing pipes or line breaks are sanitized to underscores. The snapshot is replaced atomically so readers never consume a partially written record. The adjacent `n1ssanlogs.md` remains an append-only human-readable diagnostic log.

## States

- `INITIALIZING`: worker has started.
- `CHECKS_PASSED`: required initialization checks completed.
- `READY`: required startup sequence completed; the worker emits a heartbeat every 10 seconds.
- `DEGRADED`: required initialization passed, but an optional glove schema feature is unavailable; `reason` identifies the limitation. The worker continues to heartbeat.
- `FAILED`: required initialization failed; `reason` identifies the failure.

The heartbeat proves only that the initialization worker is still running. It is not a guarantee that every game-side feature is independently healthy. Consumers should treat a missing or older-than-30-seconds heartbeat as unknown/stale, never as READY.

## Consumers

Consumers must verify protocol version, process ID, timestamp freshness and state. A status file is scoped to the CS2 process ID and must not be reused for another process. A process exit invalidates its status regardless of the last recorded state.

## Shutdown

No shutdown state is emitted from `DllMain(DLL_PROCESS_DETACH)`: doing file I/O there would add unsafe work under the Windows loader lock. Process exit is the authoritative end-of-session signal for this version.
