#pragma once

class Controller {
public:
    Controller(double kp);

    double computeThrottle(double target_velocity,
                            double current_velocity,
                            double dt);
                        
private:
    double kp_;
};