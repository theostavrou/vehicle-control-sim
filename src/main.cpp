#include <iostream>
#include "Vehicle.h"
#include "SimulationEngine.h"

int main() {

    Vehicle car(1000.0, 4000.0, 200.0); // mass (kg), max force (N), drag coefficient (N / m/s)
    SimulationEngine sim(car, 0.1, 100);

    sim.run();

    return 0;
}