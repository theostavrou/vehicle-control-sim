#pragma once

class Vehicle {
public:
    Vehicle(double mass, double max_force, double drag_coeff);

    void applyThrottle(double throttle, double dt);

    double getVelocity() const;

private:
    double mass_;
    double velocity_;
    double max_force_;
    double drag_coeff_;
};