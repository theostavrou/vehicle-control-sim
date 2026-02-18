#include <iostream>
#include "Vehicle.h"

int main() {

    Vehicle car(1000.0); //sets mass of car

    double force = 2000.0;  //Newtons
    double dt = 0.1;        // 100ms time step

    for (int i = 0; i < 10; ++ i) {
        car.applyForce(force, dt);
        std::cout <<"Velocity: " << car.getVelocity() << " m/s" << std::endl;
    }

    return 0;
}