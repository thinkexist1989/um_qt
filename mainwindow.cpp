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

	glwnd = new Window(this);

	ui->glLayout->addWidget(glwnd);

	glwnd->load_stl("D:\\Git_Proj\\um_qt\\fstl\\gl\\um_stl\\all.STL");

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
	GlobalVar::Joint1->SetGoalPostion(ui->GoalPosSpinBox->value());
}

void MainWindow::handle_time_out()
{
	GlobalVar::Joint1->GetCurrentPosition(&dxl_present_position);
	ui->CurrentPosSpinBox->setValue(dxl_present_position);
}

void MainWindow::on_actionSettings_triggered()
{
	ui->statusBar->showMessage("Open Serial Port Settings", 2000);
	m_psettingsdlg->show();
}
