#pragma once

#include <QDialog>
#include "ui_singlejointcontrldlg.h"

class SingleJointContrlDlg : public QDialog
{
	Q_OBJECT

public:
	SingleJointContrlDlg(QWidget *parent = Q_NULLPTR);
	~SingleJointContrlDlg();

private:
	Ui::SingleJointContrlDlg ui;

public slots:
	void on_SetPosBtn_1_clicked();
	void on_SetPosBtn_2_clicked();
	void on_SetPosBtn_3_clicked();
	void on_SetPosBtn_4_clicked();
	void on_SetPosBtn_5_clicked();
};
