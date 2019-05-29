#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include <conio.h>
#include <stdlib.h>
//#include <stdio.h>

#include <qmessagebox.h>
#include <qtimer.h>


//int getch()
//{
//	return _getch();
//}
//
//int kbhit(void)
//{
//	return _kbhit();
//}


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	portHandler = dynamixel::PortHandler::getPortHandler(DEVICENAME);

	packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);

	// Open port
	if (portHandler->openPort()) {
		QMessageBox::about(this, "PORT", "Succeed to openPort!");
	}
	else {
		QMessageBox::warning(this, "PORT", "Failed to open the port!");
		this->close();
	}

	// Set port baudrate
	if (portHandler->setBaudRate(BAUDRATE)) {
		QMessageBox::about(this, "BAUDRATE", "Succeeded to change the baudrate!");
	}
	else
	{
		QMessageBox::warning(this, "BAUDRATE", "Failed to change the baudrate!\n");
		this->close();
	}

	// Enable Dynamixel Torque
	char temp[100];
	dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, DXL_ID, ADDR_PRO_TORQUE_ENABLE, TORQUE_ENABLE, &dxl_error);
	if (dxl_comm_result != COMM_SUCCESS) {
		sprintf(temp, "WARNING: %s\n", packetHandler->getTxRxResult(dxl_comm_result));
		QMessageBox::warning(this, "TORQUE_ENABLE", QString(temp));
		this->close();
	}
	else if (dxl_error != 0)
	{
		sprintf(temp, "ERROR: %s\n", packetHandler->getRxPacketError(dxl_error));
		QMessageBox::warning(this, "TORQUE_ENABLE", QString(temp));
		this->close();
	}
	else
	{
		QMessageBox::about(this, "DYNAMIXEL", "Dynamixel has been successfully connected!");
	}

	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(handle_time_out()));
	isUsed = false;
	timer->start(100);

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_SetPosBtn_clicked()
{
	if (isUsed == false) {
		isUsed = true;
		dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, DXL_ID, ADDR_PRO_TORQUE_ENABLE, TORQUE_ENABLE, &dxl_error);
		dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, DXL_ID, ADDR_PRO_GOAL_POSITION, ui->GoalPosSpinBox->value(), &dxl_error);
		isUsed = false;
	}
	//QMessageBox::about(this, "test", "Button clicked!");
}

void MainWindow::handle_time_out()
{
	if (isUsed == false) {
		isUsed = true;
		// Read present position
		dxl_comm_result = packetHandler->read4ByteTxRx(portHandler, DXL_ID, ADDR_PRO_PRESENT_POSITION, (uint32_t*)&dxl_present_position, &dxl_error);
		isUsed = false;
		if (dxl_comm_result != COMM_SUCCESS)
		{
			//printf("%s\n", packetHandler->getTxRxResult(dxl_comm_result));
		}
		else if (dxl_error != 0)
		{
			//printf("%s\n", packetHandler->getRxPacketError(dxl_error));
		}
		//printf("[ID:%03d] GoalPos:%03d  PresPos:%03d\n", DXL_ID, dxl_goal_position[index], dxl_present_position);
		ui->CurrentPosSpinBox->setValue(dxl_present_position);
	}
}