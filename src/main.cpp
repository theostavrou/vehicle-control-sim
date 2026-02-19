#include <iostream>
#include "Vehicle.h"
#include "SimulationEngine.h"

int main() {

    Vehicle car(1000.0, 4000.0); //sets mass (kg) and max force (N)
    SimulationEngine sim(car, 0.1, 10);

    sim.run();

    return 0;
}