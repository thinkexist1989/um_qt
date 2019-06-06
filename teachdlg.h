#pragma once

#include <QDialog>
#include "ui_teachdlg.h"

#include "globalvar.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTimer>
#include <QTime>

class TeachDlg : public QDialog
{
	Q_OBJECT

public:
	TeachDlg(QWidget *parent = Q_NULLPTR);
	~TeachDlg();

	void SetStatusMsg(QString msg);
	QVector<int*> command;

	QTimer* timer;
	QTime time;

private:
	Ui::TeachDlg ui;

public slots:
	void on_csvBtn_clicked();
	void on_startBtn_clicked();

	void handle_timeout();

};
