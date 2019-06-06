#include "settingsdlg.h"
#include <qserialportinfo.h>

SettingsDlg::SettingsDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	foreach(const QSerialPortInfo &qspinfo, QSerialPortInfo::availablePorts()) {
		ui.portNameBox->addItem(qspinfo.portName());
		ui.infoBrowser->append("Found Serial Port:");
		ui.infoBrowser->append("   portname -> " + qspinfo.portName());
		ui.infoBrowser->append("   description -> " + qspinfo.description());
		ui.infoBrowser->append("   manufacture -> " + qspinfo.manufacturer());
		//ui.infoBrowser->append("serialnumber   " + qspinfo.serialNumber());
		//ui.infoBrowser->append("systemlocation " + qspinfo.serialNumber());
	}
	ui.portNameBox->setCurrentIndex(0);
	m_portName = ui.portNameBox->currentText();

	serialCtrl.addButton(ui.startBtn, 1);
	serialCtrl.addButton(ui.stopBtn, 0);
	connect(&serialCtrl, SIGNAL(buttonClicked(int)), this, SLOT(onSerialCtrl(int)));
}

SettingsDlg::~SettingsDlg()
{
}

void SettingsDlg::onSerialCtrl(int id)
{
	if (id == 1) {
		if (JointControl::OpenPort(ui.portNameBox->currentText())) {
			ui.infoBrowser->append("[INFO]Succeed to open serial port");
		}
		else {
			ui.infoBrowser->append("[ERROR]Failed to open serial port");
			return;
		}

		if (JointControl::SetBaudRate(ui.baudBox->currentText().toInt())) {
			ui.infoBrowser->append("[INFO]Succeed to set baudrate");
		}
		else {
			ui.infoBrowser->append("[ERROR]Failed to set baudrate");
			return;
		}
	}
	else {
		JointControl::ClosePort();
		ui.infoBrowser->append("[INFO]Succeed to close serial port");
	}
}