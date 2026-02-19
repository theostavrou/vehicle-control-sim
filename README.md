#Vehicle Control Simulation

This project is a discrete time vehicle simulation written in C++.

It demonstrates:
- vehicle dynamics with linear drag
- limitations of open-loop control
- proportional control and steady-state error
- proportional-integral control for velocity tracking

The project was built incrementally to show how control requirements emerge naturally from physical system behaviour.

## Current Bahviour
- PI control reaches the target velocity
- Slight overshoot is observed due to integral windup

## Planned Improvements
- Anti-windup handling
- Logging and plotting
- Optional PID extension