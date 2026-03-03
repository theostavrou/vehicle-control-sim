cmake_minimum_required(VERSION 3.16)
project(VehicleControlSim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vehicle_sim
	src/main.cpp
	src/Vehicle.cpp
	src/SimulationEngine.cpp
	src/Controller.cpp
	src/Logger.cpp
)

target_include_directories(vehicle_sim PRIVATE include)