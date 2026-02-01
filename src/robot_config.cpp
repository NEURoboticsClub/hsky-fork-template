#include "robot_config.hpp"

#include <hskylib/robot_specs.h>
#include <hskylib/subsystems/pneumatics.h>
#include <hskylib/utils/utils.h>

#include "pros/adi.hpp"
#include "pros/motors.h"

#define ROBOT_1

HskyController controller(pros::E_CONTROLLER_MASTER);

//---------------------------------------------------
// ##################### Robot 1 #####################
//---------------------------------------------------

#ifdef ROBOT_1

//===================== CONFIG =====================

//===================== DEVICES =====================

//==================== SUBSYSTEMS ====================

//---------------------------------------------------
// ##################### Robot 2 #####################
//---------------------------------------------------

#elifdef ROBOT_2

//===================== CONFIG =====================

//===================== DEVICES =====================

//==================== SUBSYSTEMS ====================

#endif

//====================== UTILS ======================

void deviceInit() {}

void opcontrolInit() {}

void robotInit() { deviceInit(); }