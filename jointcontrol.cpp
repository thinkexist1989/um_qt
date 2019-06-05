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
	if (bPortOpened)
		m_comm_result = packetHandler->write1ByteTxRx(portHandler, m_ID, ADDR_PRO_OPERATING_MODE, VELOCITY, &m_dxl_error);
	return m_comm_result;
}

int JointControl::EnableJointTorque()
{
	if (bPortOpened)
		m_comm_result = packetHandler->write1ByteTxRx(portHandler, m_ID, ADDR_PRO_TORQUE_ENABLE, TORQUE_ENABLE, &m_dxl_error);
	return m_comm_result;


	//if (m_comm_result != COMM_SUCCESS) {
	//}
}

int JointControl::SetGoalPostion(int goal)
{
	EnableJointTorque();
	if (bPortOpened)
		m_comm_result = packetHandler->write4ByteTxRx(portHandler, m_ID, ADDR_PRO_GOAL_POSITION, goal, &m_dxl_error);
	return m_comm_result;
}

int JointControl::GetCurrentPosition(int * pCurrentPos)
{
	if (bBaudOK)
		m_comm_result = packetHandler->read4ByteTxRx(portHandler, m_ID, ADDR_PRO_PRESENT_POSITION, (uint32_t*)pCurrentPos, &m_dxl_error);
	return m_comm_result;
}

const char * JointControl::GetErrorMsg(uint8_t error) //error £¡= 0
{
	return packetHandler->getRxPacketError(error);
}

const char * JointControl::GetResMsg(int res) //res != COMM_SUCCESS
{
	return packetHandler->getTxRxResult(res);
}


dynamixel::PortHandler* JointControl::portHandler = NULL;
bool JointControl::bPortOpened = false;
bool JointControl::bBaudOK = false;