#include "SimulationEngine.h"
#include <iostream>

SimulationEngine::SimulationEngine(Vehicle& vehicle,
                                    Controller& controller, 
                                    double dt, 
                                    int steps,
                                    double target_velocity)
    : vehicle_(vehicle), 
        controller_(controller),
        dt_(dt), 
        steps_(steps),
        target_velocity_(target_velocity)
{
}

void SimulationEngine::run()
{
    for (int i = 0; i <steps_; ++i) {

        double current_velocity = vehicle_.getVelocity();

        double throttle = controller_.computeThrottle(
            target_velocity_,
            current_velocity,
            dt_);

            vehicle_.applyThrottle(throttle, dt_);

        std::cout << "Step " << i
                  << " | v = " << current_velocity
                  << " | throttle = " << throttle
                  << std::endl;
    }
}