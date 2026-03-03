#pragma once

#include <fstream>
#include <string>

class Logger {
public:
    Logger(const std::string& filename);

    void writeHeader();
    void log(double time, double velocity, double throttle);

private:
    std::ofstream file_;
};