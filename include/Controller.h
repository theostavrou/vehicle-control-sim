#pragma once

class Controller {
public:
    Controller(double kp, double ki);

    double computeThrottle(double target_velocity,
                            double current_velocity,
                            double dt);
                        
private:
    double kp_;
    double ki_;
    double integral_error_;
};