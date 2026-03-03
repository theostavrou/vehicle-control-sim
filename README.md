## Vehicle Control Simulation

This project is a discrete time vehicle simulation written in C++.

It demonstrates:
- vehicle dynamics with linear drag
- limitations of open-loop control
- proportional control and steady-state error
- proportional-integral control for velocity tracking
- anti-windup to limit overshoot

The project was built incrementally to show how control requirements emerge naturally from physical system behaviour.

## Current Bahviour
- PI control reaches the target velocity
- overshoot is limited to around 1.9%
- results are logged to a .csv file

## Planned Improvements
- Plotting using python (matplotlib)
- Optional PID extension