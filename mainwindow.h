#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingsdlg.h"
#include "switchmodedlg.h"
#include "singlejointcontrldlg.h"
#include "teachdlg.h"
#include "aboutdlg.h"

#include "jointcontrol.h"

#include "dynamixel_sdk.h"
#include "globalvar.h"

#include "window.h"

#include "pollthread.h"

extern PollThread *m_pthread;

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
	SingleJointContrlDlg *m_pSJCdlg;
	TeachDlg *m_teachdlg;
	AboutDlg *m_aboutdlg;
	SwitchModeDlg *m_smdlg;

	//PollThread *m_pthread;

	Window* glwnd;

	void SetStatusMsg(QString msg);

private:
	Ui::MainWindow *ui;

public slots:
	void on_SetPosBtn_clicked();
	void handle_time_out();
	void on_actionSettings_triggered();
	void on_actionSingleJointControl_triggered();
	void on_actionAbout_triggered();
	void on_actionTeach_triggered();
	void on_actionMode_triggered();
};

#endif // MAINWINDOW_H
