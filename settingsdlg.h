#pragma once

#include <QDialog>
#include "ui_settingsdlg.h"

#include <qbuttongroup.h>
#include "jointcontrol.h"

class SettingsDlg : public QDialog
{
	Q_OBJECT

public:
	SettingsDlg(QWidget *parent = Q_NULLPTR);
	~SettingsDlg();


	QString m_portName;

	QButtonGroup serialCtrl;
private:
	Ui::SettingsDlg ui;

public slots:
	void onSerialCtrl(int id);
};
