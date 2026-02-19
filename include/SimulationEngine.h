#pragma once

#include "Vehicle.h"
#include "Controller.h"

class SimulationEngine {
public:
    SimulationEngine(Vehicle& vehicle,
                    Controller& controller, 
                    double dt, 
                    int steps,
                    double target_velocity);

    void run();

private:
    Vehicle& vehicle_;
    Controller& controller_;
    double dt_;
    int steps_;
    double target_velocity_;
};
