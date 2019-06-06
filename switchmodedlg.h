#pragma once

#include <QDialog>
#include "ui_switchmodedlg.h"
#include "globalvar.h"

class SwitchModeDlg : public QDialog
{
	Q_OBJECT

public:
	SwitchModeDlg(QWidget *parent = Q_NULLPTR);
	~SwitchModeDlg();

	void refresh();
	void show_mode(uint8_t mode, QLineEdit* pLineEdit);
	void show_minmax(uint32_t minmax, QSpinBox* pSpinBox);
	void show_pid(JointControl* joint, QSpinBox* pBox, QSpinBox* iBox, QSpinBox* dBox);

	QVector<QSpinBox*> minGroup;
	QVector<QSpinBox*> maxGroup;
	QVector<QSpinBox*> pGroup;
	QVector<QSpinBox*> dGroup;
	QVector<QSpinBox*> iGroup;

private:
	Ui::SwitchModeDlg ui;

public slots:
	void on_refreshBtn_clicked();

	void on_minBtn_clicked();
	void on_maxBtn_clicked();
	void on_pBtn_clicked();
	void on_iBtn_clicked();
	void on_dBtn_clicked();

	void on_rmodeBtn_clicked();
	void on_rminBtn_clicked();
	void on_rmaxBtn_clicked();
	void on_rpBtn_clicked();
	void on_riBtn_clicked();
	void on_rdBtn_clicked();
};
