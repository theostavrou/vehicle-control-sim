#pragma once

#include "Vehicle.h"

class SimulationEngine {
public:
    SimulationEngine(Vehicle& vehicle, double dt, int steps);

    void run();

private:
    Vehicle& vehicle_;
    double dt_;
    int steps_;
};
