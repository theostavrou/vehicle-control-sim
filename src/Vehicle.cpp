#include "Vehicle.h"

Vehicle::Vehicle(double mass)
    : mass_(mass), velocity_(0.0)
{
}

void Vehicle::applyForce(double force, double dt)
{
    double acceleration = force / mass_;
    velocity_ += acceleration * dt;
}

double Vehicle::getVelocity() const
{
    return velocity_;
}