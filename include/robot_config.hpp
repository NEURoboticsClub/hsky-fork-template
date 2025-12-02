#ifndef ROBOT_CONFIG_HPP
#define ROBOT_CONFIG_HPP

// #include <vector>

#include "api.h"
#include "utils.h"

// TODO: Clean up and document
struct AutonConstants {
	double wheelDiameterIn;
	double trackWidthIn;
	double ticksPerRev;	 // encoder ticks per revolution

	double kPDrive;
	double kIDrive;
	double kDDrive;

	double kPTurn;
	double kITurn;
	double kDTurn;

	double driveToleranceIn;
	double turnToleranceDeg;

	double maxDriveVelocityDutyCycle;  // velocity units
	double maxTurnVelocityDutyCycle;   // velocity units
};

struct DrivebaseConfig {
	std::vector<int8_t> brainside; // left
	std::vector<int8_t> batteryside; // right
	pros::motor_brake_mode_e brakeMode;
	pros::motor_gearset_e gearset;
	DriveStyle driveStyle;
	double speedMultiplier;	 // 0.0 to 1.0
	AutonConstants autonConstants;
};

struct TransportConfig {
	std::vector<int8_t> motors;
	pros::motor_brake_mode_e brakeMode;
	pros::motor_gearset_e gearset;
	pros::controller_digital_e_t inButton;
	pros::controller_digital_e_t outButton;
	double dutyCycle;
};

struct ColorSorterConfig {
	pros::Optical opticalSensor;
	std::vector<int8_t> motors;
	pros::motor_brake_mode_e brakeMode;
	pros::motor_gearset_e gearset;
	pros::controller_digital_e_t enableButton;
	double dutyCycle;
	double minHue;
	double maxHue;
	uint32_t sortDelay;
};

struct PneumaticsConfig {
	char port;
	pros::controller_digital_e_t extendButton;
	pros::controller_digital_e_t retractButton;
};

struct RobotConfig {
	DrivebaseConfig drivebase;
	TransportConfig intake;
	TransportConfig centerStageLower;
	TransportConfig centerStageUpper;
	TransportConfig hood;
	PneumaticsConfig intakeLeft;
	PneumaticsConfig intakeRight;
	PneumaticsConfig scoring;
};

//================== HSKY 1 CONFIG ==================

extern AutonConstants hsky1AutonConstants;
extern DrivebaseConfig hsky1Drivebase;
extern TransportConfig hsky1Intake;
extern TransportConfig hsky1CenterStageLower;
extern TransportConfig hsky1CenterStageUpper;
extern TransportConfig hsky1Hood;
extern PneumaticsConfig hsky1IntakeLeft;
extern PneumaticsConfig hsky1IntakeRight;
extern PneumaticsConfig hsky1Scoring;
extern RobotConfig hsky1Config;

//================== HSKY 2 CONFIG ==================

extern AutonConstants hsky2AutonConstants;
extern DrivebaseConfig hsky2Drivebase;
extern TransportConfig hsky2Intake;
extern TransportConfig hsky2CenterStageLower;
extern TransportConfig hsky2CenterStageUpper;
extern TransportConfig hsky2Hood;
extern PneumaticsConfig hsky2IntakeLeft;
extern PneumaticsConfig hsky2IntakeRight;
extern PneumaticsConfig hsky2Scoring;
extern RobotConfig hsky2Config;

#endif