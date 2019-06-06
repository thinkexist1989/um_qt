#pragma once

#include <QDialog>
#include "ui_switchmodedlg.h"

class SwitchModeDlg : public QDialog
{
	Q_OBJECT

public:
	SwitchModeDlg(QWidget *parent = Q_NULLPTR);
	~SwitchModeDlg();

private:
	Ui::SwitchModeDlg ui;
};
