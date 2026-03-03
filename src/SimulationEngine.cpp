#include "SimulationEngine.h"
#include <iostream>
#include <fstream>

SimulationEngine::SimulationEngine(Vehicle& vehicle,
                                    Controller& controller, 
                                    Logger& logger,
                                    double dt, 
                                    int steps,
                                    double target_velocity)
    : vehicle_(vehicle), 
        controller_(controller),
        logger_(logger),
        dt_(dt), 
        steps_(steps),
        target_velocity_(target_velocity)
{
}

void SimulationEngine::run()
{

    logger_.writeHeader();

    double time = 0.0;

    for (int i = 0; i <steps_; ++i) {

        double current_velocity = vehicle_.getVelocity();

        double throttle = controller_.computeThrottle(
            target_velocity_,
            current_velocity,
            dt_);

            vehicle_.applyThrottle(throttle, dt_);

        logger_.log(time, current_velocity, throttle);

        time += dt_;
    }
}