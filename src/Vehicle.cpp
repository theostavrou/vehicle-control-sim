#include "Vehicle.h"

Vehicle::Vehicle(double mass, double max_force, double drag_coeff)
    : mass_(mass), 
    velocity_(0.0), 
    max_force_(max_force), 
    drag_coeff_(drag_coeff)
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
    double engine_force = throttle * max_force_;
    double drag_force = drag_coeff_ * velocity_;
    double net_force = engine_force - drag_force;
    
    double acceleration = net_force / mass_;
    velocity_ += acceleration * dt;
}

double Vehicle::getVelocity() const
{
    return velocity_;
}