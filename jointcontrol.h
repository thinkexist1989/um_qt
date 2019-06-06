#pragma once
#ifndef JOINTCONTROL_H
#define JOINTCONTROL_H

#include "dynamixel_sdk.h"
#include <qstring.h>
#include <string.h>

// Control table address
#define ADDR_PRO_TORQUE_ENABLE          64                 // Control table address is different in Dynamixel model
#define ADDR_PRO_LED					65

#define ADDR_PRO_GOAL_POSITION          116
#define ADDR_PRO_PRESENT_POSITION       132

#define ADDR_PRO_OPERATING_MODE			11

#define ADDR_PRO_POSITION_D_GAIN		80
#define ADDR_PRO_POSITION_I_GAIN		82
#define ADDR_PRO_POSITION_P_GAIN		84

// Protocol version
#define PROTOCOL_VERSION                2.0                 // See which protocol version is used in the Dynamixel

// Default setting
#define DXL_ID                          1                   // Dynamixel ID: 1
#define BAUDRATE                        57600
#define DEVICENAME                      "COM4"      // Check which port is being used on your controller
															// ex) Windows: "COM1"   Linux: "/dev/ttyUSB0" Mac: "/dev/tty.usbserial-*"

#define TORQUE_ENABLE                   1                   // Value for enabling the torque
#define TORQUE_DISABLE                  0                   // Value for disabling the torque
#define DXL_MINIMUM_POSITION_VALUE      400             // Dynamixel will rotate between this value
#define DXL_MAXIMUM_POSITION_VALUE      1200             // and this value (note that the Dynamixel would not move when the position value is out of movable range. Check e-manual about the range of the Dynamixel you use.)
#define DXL_MOVING_STATUS_THRESHOLD     20                  // Dynamixel moving status threshold

#define ESC_ASCII_VALUE                 0x1b


// Operating Mode
#define CURRENT 0x00
#define VELOCITY 0x01
#define POSITION 0x03
#define EXT_POSITION 0x04
//LED status
#define LED_ON 0x01
#define LED_OFF 0x00



class JointControl
{
public:
	JointControl(int ID = 0, int min = 0, int max = 4095);
	~JointControl();

	static dynamixel::PortHandler *portHandler; //端口句柄，因为所有电机都挂载同一总线，因此定义为静态成员函数。

	static bool bPortOpened;
	static bool OpenPort(QString portName);
	static void ClosePort();
	static bool bBaudOK;
	static bool SetBaudRate(int baud);

	int m_CurrentPosition; //当前位置
	int m_P_gain; //P增益
	int m_I_gain; //I增益
	int m_D_gain; //D增益

private:
	int m_ID;
	int m_minPosVal;
	int m_maxPosVal;
	int m_comm_result;      //通信结果
	uint8_t m_dxl_error;     // Dynamixel error
	dynamixel::PacketHandler *packetHandler; //数据包句柄
public:
	int SetOperatingMode(uint8_t mode); //设置操作模式 位置/扩展位置
	int SetPositionPID(uint16_t P_gain, uint16_t I_gain, uint16_t D_gain);
	int SetLED(uint16_t status);
	int EnableJointTorque();
	int SetGoalPostion(int goal);
	int GetCurrentPosition(int& CurrentPos);
	int GetCurrentPosition();
	const char* GetErrorMsg(uint8_t& error);
	const char* GetResMsg(int& res);

};

#endif // !JOINTCONTROL_H