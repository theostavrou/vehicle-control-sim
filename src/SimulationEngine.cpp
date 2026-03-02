#include "SimulationEngine.h"
#include <iostream>
#include <fstream>

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

    std::ofstream log_file("simulation_log.csv");

    log_file << "time,velocity,throttle\n";

    double time = 0.0;

    for (int i = 0; i <steps_; ++i) {

        double current_velocity = vehicle_.getVelocity();

        double throttle = controller_.computeThrottle(
            target_velocity_,
            current_velocity,
            dt_);

            vehicle_.applyThrottle(throttle, dt_);

        log_file << time << ","
                 << current_velocity << ","
                 << throttle << "\n";

        time += dt_;
    }

    log_file.close();
}