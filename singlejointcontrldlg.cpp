#include "singlejointcontrldlg.h"
#include <mainwindow.h>

SingleJointContrlDlg::SingleJointContrlDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

SingleJointContrlDlg::~SingleJointContrlDlg()
{
}

void SingleJointContrlDlg::on_SetPosBtn_1_clicked()
{
	((MainWindow*)this->parentWidget())->SetStatusMsg("Set Joint 1's Goal Position");
	GlobalVar::Joints[0]->EnableJointTorque();
	GlobalVar::Joints[0]->SetGoalPostion(ui.GoalPosSpinBox_1->value());
}

void SingleJointContrlDlg::on_SetPosBtn_2_clicked()
{
	((MainWindow*)this->parentWidget())->SetStatusMsg("Set Joint 2's Goal Position");
	GlobalVar::Joints[1]->EnableJointTorque();
	GlobalVar::Joints[1]->SetGoalPostion(ui.GoalPosSpinBox_1->value());
}

void SingleJointContrlDlg::on_SetPosBtn_3_clicked()
{
	((MainWindow*)this->parentWidget())->SetStatusMsg("Set Joint 3's Goal Position");
	GlobalVar::Joints[2]->EnableJointTorque();
	GlobalVar::Joints[2]->SetGoalPostion(ui.GoalPosSpinBox_1->value());
}

void SingleJointContrlDlg::on_SetPosBtn_4_clicked()
{
	((MainWindow*)this->parentWidget())->SetStatusMsg("Set Joint 4's Goal Position");
	GlobalVar::Joints[3]->EnableJointTorque();
	GlobalVar::Joints[3]->SetGoalPostion(ui.GoalPosSpinBox_1->value());
}

void SingleJointContrlDlg::on_SetPosBtn_5_clicked()
{
	((MainWindow*)this->parentWidget())->SetStatusMsg("Set Joint 5's Goal Position");
	GlobalVar::Joints[4]->EnableJointTorque();
	GlobalVar::Joints[4]->SetGoalPostion(ui.GoalPosSpinBox_1->value());
}