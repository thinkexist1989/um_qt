#include "switchmodedlg.h"

SwitchModeDlg::SwitchModeDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//refresh();
	minGroup = QVector<QSpinBox*>{ ui.minBox_1, ui.minBox_2, ui.minBox_3, ui.minBox_4, ui.minBox_5 };
	maxGroup = QVector<QSpinBox*>{ ui.maxBox_1, ui.maxBox_2, ui.maxBox_3, ui.maxBox_4, ui.maxBox_5 };
	pGroup = QVector<QSpinBox*>{ ui.pBox_1,ui.pBox_2, ui.pBox_3, ui.pBox_4, ui.pBox_5 };
	iGroup = QVector<QSpinBox*>{ ui.iBox_1,ui.iBox_2, ui.iBox_3, ui.iBox_4, ui.iBox_5 };
	dGroup = QVector<QSpinBox*>{ ui.dBox_1,ui.dBox_2, ui.dBox_3, ui.dBox_4, ui.dBox_5 };
}

SwitchModeDlg::~SwitchModeDlg()
{
}

void SwitchModeDlg::refresh()
{
	//Joint1
	GlobalVar::Joint1->GetOperationMode(); show_mode(GlobalVar::Joint1->m_mode, ui.lineEdit_mode1);
	GlobalVar::Joint1->GetMinPositionLimit(); show_minmax(GlobalVar::Joint1->m_minPosVal, ui.minBox_1);
	GlobalVar::Joint1->GetMaxPositionLimit(); show_minmax(GlobalVar::Joint1->m_maxPosVal, ui.maxBox_1);
	GlobalVar::Joint1->GetPositionPID(); show_pid(GlobalVar::Joint1, ui.pBox_1, ui.iBox_1, ui.dBox_1);
	//Joint2
	GlobalVar::Joint2->GetOperationMode(); show_mode(GlobalVar::Joint2->m_mode, ui.lineEdit_mode2);
	GlobalVar::Joint2->GetMinPositionLimit(); show_minmax(GlobalVar::Joint2->m_minPosVal, ui.minBox_2);
	GlobalVar::Joint2->GetMaxPositionLimit(); show_minmax(GlobalVar::Joint2->m_maxPosVal, ui.maxBox_2);
	GlobalVar::Joint2->GetPositionPID(); show_pid(GlobalVar::Joint2, ui.pBox_2, ui.iBox_2, ui.dBox_2);
	//Joint3
	GlobalVar::Joint3->GetOperationMode(); show_mode(GlobalVar::Joint3->m_mode, ui.lineEdit_mode3);
	GlobalVar::Joint3->GetMinPositionLimit(); show_minmax(GlobalVar::Joint3->m_minPosVal, ui.minBox_3);
	GlobalVar::Joint3->GetMaxPositionLimit(); show_minmax(GlobalVar::Joint3->m_maxPosVal, ui.maxBox_3);
	GlobalVar::Joint3->GetPositionPID(); show_pid(GlobalVar::Joint3, ui.pBox_3, ui.iBox_3, ui.dBox_3);
	//Joint4
	GlobalVar::Joint4->GetOperationMode(); show_mode(GlobalVar::Joint4->m_mode, ui.lineEdit_mode4);
	GlobalVar::Joint4->GetMinPositionLimit(); show_minmax(GlobalVar::Joint4->m_minPosVal, ui.minBox_4);
	GlobalVar::Joint4->GetMaxPositionLimit(); show_minmax(GlobalVar::Joint4->m_maxPosVal, ui.maxBox_4);
	GlobalVar::Joint4->GetPositionPID(); show_pid(GlobalVar::Joint4, ui.pBox_4, ui.iBox_4, ui.dBox_4);
	//Joint5
	GlobalVar::Joint5->GetOperationMode(); show_mode(GlobalVar::Joint5->m_mode, ui.lineEdit_mode5);
	GlobalVar::Joint5->GetMinPositionLimit(); show_minmax(GlobalVar::Joint5->m_minPosVal, ui.minBox_5);
	GlobalVar::Joint5->GetMaxPositionLimit(); show_minmax(GlobalVar::Joint5->m_maxPosVal, ui.maxBox_5);
	GlobalVar::Joint5->GetPositionPID(); show_pid(GlobalVar::Joint5, ui.pBox_5, ui.iBox_5, ui.dBox_5);
}

void SwitchModeDlg::show_mode(uint8_t mode, QLineEdit* pLineEdit)
{
	switch (mode)
	{
	case MODE_CURRENT:
		pLineEdit->setText("Current Mode");
		break;
	case MODE_POSITION:
		pLineEdit->setText("Position Mode");
		break;
	case MODE_EXT_POSITION:
		pLineEdit->setText("Ext Position Mode");
		break;
	case MODE_VELOCITY:
		pLineEdit->setText("Velocity Mode");
		break;
	default:
		break;
	}
}

void SwitchModeDlg::show_minmax(uint32_t minmax, QSpinBox * pSpinBox)
{
	pSpinBox->setValue(minmax);
}

void SwitchModeDlg::show_pid(JointControl * joint, QSpinBox * pBox, QSpinBox * iBox, QSpinBox * dBox)
{
	pBox->setValue(joint->m_P_gain);
	iBox->setValue(joint->m_I_gain);
	dBox->setValue(joint->m_D_gain);
}

void SwitchModeDlg::on_minBtn_clicked()
{
	for (int i = 0; i < JOINT_NUM; i++)
	{
		GlobalVar::Joints[i]->SetMinPositionLimit(minGroup[i]->value());
	}
}

void SwitchModeDlg::on_maxBtn_clicked()
{
	for (int i = 0; i < JOINT_NUM; i++)
	{
		GlobalVar::Joints[i]->SetMaxPositionLimit(maxGroup[i]->value());
	}
}

void SwitchModeDlg::on_pBtn_clicked()
{
	for (int i = 0; i < JOINT_NUM; i++)
	{
		GlobalVar::Joints[i]->SetPositionPID(pGroup[i]->value(), iGroup[i]->value(), dGroup[i]->value());
	}
}

void SwitchModeDlg::on_iBtn_clicked()
{
	for (int i = 0; i < JOINT_NUM; i++)
	{
		GlobalVar::Joints[i]->SetPositionPID(pGroup[i]->value(), iGroup[i]->value(), dGroup[i]->value());
	}
}

void SwitchModeDlg::on_dBtn_clicked()
{
	for (int i = 0; i < JOINT_NUM; i++)
	{
		GlobalVar::Joints[i]->SetPositionPID(pGroup[i]->value(), iGroup[i]->value(), dGroup[i]->value());
	}
}

void SwitchModeDlg::on_rmodeBtn_clicked()
{
}

void SwitchModeDlg::on_rminBtn_clicked()
{
}

void SwitchModeDlg::on_rmaxBtn_clicked()
{
}

void SwitchModeDlg::on_rpBtn_clicked()
{
}

void SwitchModeDlg::on_riBtn_clicked()
{
}

void SwitchModeDlg::on_rdBtn_clicked()
{
}

void SwitchModeDlg::on_refreshBtn_clicked()
{
	refresh();
}
