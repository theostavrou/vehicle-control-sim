#pragma once

#include "Vehicle.h"
#include "Controller.h"
#include "logger.h"

class SimulationEngine {
public:
    SimulationEngine(Vehicle& vehicle,
                    Controller& controller,
                    Logger& logger, 
                    double dt, 
                    int steps,
                    double target_velocity);

    void run();

private:
    Vehicle& vehicle_;
    Controller& controller_;
    Logger& logger_;
    double dt_;
    int steps_;
    double target_velocity_;
};
