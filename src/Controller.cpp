#include "Controller.h"

Controller::Controller(double kp, double ki)
    : kp_(kp),
    ki_(ki),
    integral_error_(0.0)
{
}

double Controller::computeThrottle(double target_velocity,
                                    double current_velocity,
                                    double dt)

{
    double error = target_velocity - current_velocity;

    integral_error_ += error * dt;

    double throttle = kp_ * error + ki_ * integral_error_;

    if (throttle < 0.0) {
        throttle = 0.0;
    } else if (throttle > 1.0) {
        throttle = 1.0;
    }

    return throttle;
}