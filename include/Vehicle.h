#pragma once

class Vehicle {
public:
    Vehicle(double mass, double max_force);

    void applyThrottle(double throttle, double dt);

    double getVelocity() const;

private:
    double mass_;
    double velocity_;
    double max_force_;
};