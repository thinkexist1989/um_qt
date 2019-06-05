#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdlib.h>

#include <qmessagebox.h>
#include <qtimer.h>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	m_psettingsdlg = new SettingsDlg(this); //初始化设置对话框
	m_pSJCdlg = new SingleJointContrlDlg(this); //初始化单关节控制对话框
	m_teachdlg = new TeachDlg(this);
	m_aboutdlg = new AboutDlg(this);
	m_pSJCdlg->resize(800, 500);
	m_aboutdlg->resize(670, 500);

	glwnd = new Window(this);

	ui->glLayout->addWidget(glwnd);

	glwnd->load_stl("fstl\\gl\\um_stl\\all.STL");
	//glwnd->load_stl("all.STL");
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(handle_time_out()));
	isUsed = false;
	timer->start(100);

	//statusBar()->setVisible(false);

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_SetPosBtn_clicked()
{
	GlobalVar::Joints[ui->idSpinBox->value() - 1]->SetGoalPostion(ui->GoalPosSpinBox->value());
	QString str;
	str.sprintf("Set Joint %d 's Goal Position: %d", ui->idSpinBox->value(), ui->GoalPosSpinBox->value());
	SetStatusMsg(str);
}

void MainWindow::SetStatusMsg(QString msg)
{
	ui->statusBar->showMessage(msg, 2000);
}

void MainWindow::handle_time_out()
{
	GlobalVar::Joint1->GetCurrentPosition(&dxl_present_position);
	ui->CurrentPosSpinBox->setValue(dxl_present_position);
}

void MainWindow::on_actionSettings_triggered()
{
	//ui->statusBar->showMessage("Open Serial Port Settings", 2000);
	SetStatusMsg("Open Serial Port Settings Dialog");
	m_psettingsdlg->show();
}

void MainWindow::on_actionSingleJointControl_triggered()
{
	//ui->statusBar->showMessage("Open Single Joint Control", 2000);
	SetStatusMsg("Open Single Joint Control Dialog");
	m_pSJCdlg->show();
}

void MainWindow::on_actionAbout_triggered()
{
	SetStatusMsg("Open About Dialog");
	m_aboutdlg->show();
}

void MainWindow::on_actionTeach_triggered()
{
	SetStatusMsg("Open Teach Programming Dialog");
	m_teachdlg->show();
}
