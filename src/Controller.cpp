#include "Controller.h"

Controller::Controller(double kp)
    : kp_(kp)
{
}

double Controller::computeThrottle(double target_velocity,
                                    double current_velocity,
                                    double /* dt */)

{
    double error = target_velocity - current_velocity;

    double throttle = kp_ * error;

    if (throttle < 0.0) {
        throttle = 0.0;
    } else if (throttle > 1.0) {
        throttle = 1.0;
    }

    return throttle;
}