#include "jointcontrol.h"


JointControl::JointControl(int ID, int min, int max) :
	m_ID(ID),
	m_minPosVal(min),
	m_maxPosVal(max),
	m_comm_result(0),
	m_dxl_error(0)
{
	packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);
}

JointControl::~JointControl()
{
}

bool JointControl::OpenPort(QString portName)
{
	portHandler = dynamixel::PortHandler::getPortHandler(portName.toStdString().c_str());
	bPortOpened = portHandler->openPort();
	return bPortOpened;
}

void JointControl::ClosePort()
{
	portHandler->closePort();
	bPortOpened = false;
	return;
}

bool JointControl::SetBaudRate(int baud)
{
	bBaudOK = portHandler->setBaudRate(baud);
	return bBaudOK;
}

int JointControl::SetOperatingMode(uint8_t mode)
{
	if (bPortOpened) {
		m_comm_result = packetHandler->write1ByteTxRx(portHandler, m_ID, ADDR_PRO_OPERATING_MODE, mode, &m_dxl_error);
		return m_comm_result;
	}
	else
		return COMM_NOT_AVAILABLE;
}

int JointControl::SetPositionPID(uint16_t P_gain, uint16_t I_gain, uint16_t D_gain)
{
	if (bPortOpened) {
		m_comm_result = packetHandler->write2ByteTxRx(portHandler, m_ID, ADDR_PRO_POSITION_D_GAIN, D_gain, &m_dxl_error);
		m_comm_result = packetHandler->write2ByteTxRx(portHandler, m_ID, ADDR_PRO_POSITION_I_GAIN, I_gain, &m_dxl_error);
		m_comm_result = packetHandler->write4ByteTxRx(portHandler, m_ID, ADDR_PRO_POSITION_P_GAIN, P_gain, &m_dxl_error);
		return m_comm_result;
	}
	else
		return COMM_NOT_AVAILABLE;
}

int JointControl::SetLED(uint16_t status)
{
	if (bPortOpened) {
		m_comm_result = packetHandler->write1ByteTxRx(portHandler, m_ID, ADDR_PRO_LED, status, &m_dxl_error);
		return m_comm_result;
	}
	return COMM_NOT_AVAILABLE;
}

int JointControl::EnableJointTorque()
{
	if (bPortOpened) {
		m_comm_result = packetHandler->write1ByteTxRx(portHandler, m_ID, ADDR_PRO_TORQUE_ENABLE, TORQUE_ENABLE, &m_dxl_error);
		return m_comm_result;
	}
	else
		return COMM_NOT_AVAILABLE;
}

int JointControl::SetGoalPostion(int goal)
{
	//EnableJointTorque();
	if (bPortOpened) {
		m_comm_result = packetHandler->write4ByteTxRx(portHandler, m_ID, ADDR_PRO_GOAL_POSITION, goal, &m_dxl_error);
		return m_comm_result;
	}
	else
		return COMM_NOT_AVAILABLE;
}

int JointControl::GetCurrentPosition(int& CurrentPos)
{
	if (bBaudOK) {
		m_comm_result = packetHandler->read4ByteTxRx(portHandler, m_ID, ADDR_PRO_PRESENT_POSITION, (uint32_t*)&m_CurrentPosition, &m_dxl_error);
		CurrentPos = m_CurrentPosition;
		return m_comm_result;
	}
	else
		return COMM_NOT_AVAILABLE;
}

int JointControl::GetCurrentPosition()
{
	if (bBaudOK) {
		m_comm_result = packetHandler->read4ByteTxRx(portHandler, m_ID, ADDR_PRO_PRESENT_POSITION, (uint32_t*)&m_CurrentPosition, &m_dxl_error);
		return m_comm_result;
	}
	else
		return COMM_NOT_AVAILABLE;
}

const char * JointControl::GetErrorMsg(uint8_t& error) //error £¡= 0
{
	return packetHandler->getRxPacketError(error);
	error = 0;
}

const char * JointControl::GetResMsg(int& res) //res != COMM_SUCCESS
{
	return packetHandler->getTxRxResult(res);
	res = COMM_NOT_AVAILABLE;
}


dynamixel::PortHandler* JointControl::portHandler = NULL;
bool JointControl::bPortOpened = false;
bool JointControl::bBaudOK = false;