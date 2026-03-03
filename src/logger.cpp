#include "logger.h"

Logger::Logger(const std::string& filename)
    : file_(filename)
{
}

void Logger::writeHeader()
{
    file_ << "time,velocity,throttle\n";
}

void Logger::log(double time, double velocity, double throttle)
{
    file_ << time << ","
          << velocity << ","
          << throttle << "\n";
}