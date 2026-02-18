#pragma once

class Vehicle {
public:
    Vehicle(double mass);

    void applyForce(double force, double dt);

    double getVelocity() const;

private:
    double mass_;
    double velocity_;
};