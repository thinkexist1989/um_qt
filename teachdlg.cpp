#include "teachdlg.h"
#include "mainwindow.h"
#include <string>
#include <qmath.h>

TeachDlg::TeachDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

TeachDlg::~TeachDlg()
{
}

void TeachDlg::SetStatusMsg(QString msg)
{
	((MainWindow*)this->parentWidget())->SetStatusMsg(msg);
}

void TeachDlg::on_startBtn_clicked()
{
	SetStatusMsg("Start Teaching Programming");

	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(handle_timeout()));
	timer->start(100);
	time.start();

}

void TeachDlg::handle_timeout()
{
	int temp = qSin(time.elapsed() / 1000.0) * 1000;
	GlobalVar::Joint1->SetGoalPostion(temp);
}

void TeachDlg::on_csvBtn_clicked()
{
	QString filename = QFileDialog::getOpenFileName(this, tr("Choose CSV file"), QString(), tr("CSV Files (*.csv)"));
	SetStatusMsg(QString("Read CSV File:") + filename);

	QFile file(filename);
	if (!file.open(QIODevice::ReadOnly)) {
		ui.infoBrowser->append("[Error] READ CSV FAILED: Could not open file!");
		return;
	}

	//SetStatusMsg("Open CSV Success!!");
	QTextStream *ts = new QTextStream(&file);
	QStringList tempRow = ts->readAll().split('\n', QString::SkipEmptyParts);//每行以\n区分
	for (int i = 0; i < tempRow.count(); i++)
	{
		//ui.infoBrowser->append(QString("[COMMAND]") + tempRow.at(i));
		QStringList tempCol = tempRow.at(i).split(',', QString::SkipEmptyParts);//
		int* p = new int[5];
		if (tempCol.count() == 5) {
			for (int j = 0; j < 5; j++)
			{
				p[j] = tempCol.at(j).toInt();
			}
			command.push_back(p);
		}
	}

	if (command.count() < 1)
		ui.infoBrowser->append("[INFO] NO DATA READ: The file may be empty or data format wrong!");

	for (int k = 0; k < command.count(); k++) {
		QString str;
		str.sprintf("[COMMAND] Joint1: %d, Joint2: %d, Joint3: %d, Joint4: %d, Joint5: %d", command[k][0], command[k][1], command[k][2], command[k][3], command[k][4]);
		ui.infoBrowser->append(str);
	}

	file.close();//操作完成后记得关闭文件
}