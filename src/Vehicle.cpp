#include "Vehicle.h"

Vehicle::Vehicle(double mass, double max_force)
    : mass_(mass), velocity_(0.0), max_force_(max_force)
{
}

void Vehicle::applyThrottle(double throttle, double dt)
{
    //Clamp throttle to [0, 1]
    if (throttle < 0.0) {
        throttle = 0.0;
    } else if (throttle > 1.0) {
        throttle = 1.0;
    }
    double force = throttle * max_force_;
    double acceleration = force / mass_;
    velocity_ += acceleration * dt;
}

double Vehicle::getVelocity() const
{
    return velocity_;
}