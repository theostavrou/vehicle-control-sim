#include "SimulationEngine.h"
#include <iostream>

SimulationEngine::SimulationEngine(Vehicle& vehicle, double dt, int steps)
    : vehicle_(vehicle), dt_(dt), steps_(steps)
{
}

void SimulationEngine::run()
{
    double throttle = 0.5; //fixed throttle of 50%

    for (int i = 0; i <steps_; ++i) {
        vehicle_.applyThrottle(throttle, dt_);
        std::cout << "Step " << i
                  << " | Velocity: "
                  << vehicle_.getVelocity()
                  << " m/s" << std::endl;
    }
}