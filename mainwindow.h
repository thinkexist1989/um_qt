#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingsdlg.h"

#include "jointcontrol.h"

#include "dynamixel_sdk.h"
#include "globalvar.h"

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();

	bool isUsed;
	int index = 0;
	int dxl_comm_result = COMM_TX_FAIL;             // Communication result
	int dxl_goal_position[2] = { DXL_MINIMUM_POSITION_VALUE, DXL_MAXIMUM_POSITION_VALUE };         // Goal position

	int32_t dxl_present_position = 0;               // Present position

	dynamixel::PacketHandler *packetHandler;
	dynamixel::PortHandler *portHandler;

	SettingsDlg *m_psettingsdlg;

private:
	Ui::MainWindow *ui;

public slots:
	void on_SetPosBtn_clicked();
	void handle_time_out();
	void on_actionSettings_triggered();
};

#endif // MAINWINDOW_H
