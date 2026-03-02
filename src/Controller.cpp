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

    double proposed_integral = integral_error_ + error * dt;

    double unclamped_throttle = kp_ * error + ki_ * proposed_integral;

    bool saturating_high = unclamped_throttle > 1.0 && error > 0.0;
    bool saturating_low = unclamped_throttle < 0.0 && error < 0.0;

    if(!saturating_high && !saturating_low) {
        integral_error_ = proposed_integral;
    }

    double throttle = kp_ * error + ki_ * integral_error_;

    if (throttle < 0.0) {
        throttle = 0.0;
    } else if (throttle > 1.0) {
        throttle = 1.0;
    }

    return throttle;
}