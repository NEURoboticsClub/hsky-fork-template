#ifndef ROBOT_CONFIG_HPP
#define ROBOT_CONFIG_HPP

#include <vector>

#include "api.h"
#include "hskylib.h"
#include "pros/motor_group.hpp"

extern HskyController controller;
extern pros::MotorGroup leftMotorGroup;
extern pros::MotorGroup rightMotorGroup;
extern std::uint32_t startVoltage = 12000;
extern std::uint32_t stopVoltage = 12000;

void opcontrolInit();
void robotInit();

#endif