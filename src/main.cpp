#include <iostream>
#include "Vehicle.h"

int main() {

    Vehicle car(1000.0, 4000.0); //sets mass (kg) and max force (N)

    double throttle = 0.5;  // 50% throttle
    double dt = 0.1;        // 100ms time step

    for (int i = 0; i < 10; ++ i) {
        car.applyThrottle(throttle, dt);
        std::cout <<"Velocity: " << car.getVelocity() << " m/s" << std::endl;
    }

    return 0;
}