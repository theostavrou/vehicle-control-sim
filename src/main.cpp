#include "Vehicle.h"
#include "SimulationEngine.h"
#include "Controller.h"

int main() {

    Vehicle car(1000.0, 4000.0, 200.0); // mass (kg), max force (N), drag coefficient (N / m/s)
    Controller controller(0.07, 0.02);

    SimulationEngine sim(car, controller, 0.1, 150, 15.0);

    sim.run();

    return 0;
}