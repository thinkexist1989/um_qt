#pragma once

#include <QDialog>
#include "ui_teachdlg.h"

#include "globalvar.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QVector>

class TeachDlg : public QDialog
{
	Q_OBJECT

public:
	TeachDlg(QWidget *parent = Q_NULLPTR);
	~TeachDlg();

	void SetStatusMsg(QString msg);
	QVector<int*> command;

private:
	Ui::TeachDlg ui;

public slots:
	void on_csvBtn_clicked();
	void on_startBtn_clicked();

};
