/********************************************************************************
** Form generated from reading UI file 'settingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDLG_H
#define UI_SETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDlg
{
public:
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QComboBox *portNameBox;
    QLabel *label_5;
    QComboBox *baudBox;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QTextBrowser *infoBrowser;

    void setupUi(QDialog *SettingsDlg)
    {
        if (SettingsDlg->objectName().isEmpty())
            SettingsDlg->setObjectName(QString::fromUtf8("SettingsDlg"));
        SettingsDlg->resize(400, 300);
        layoutWidget_2 = new QWidget(SettingsDlg);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 381, 45));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        portNameBox = new QComboBox(layoutWidget_2);
        portNameBox->setObjectName(QString::fromUtf8("portNameBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portNameBox->sizePolicy().hasHeightForWidth());
        portNameBox->setSizePolicy(sizePolicy);
        portNameBox->setFont(font);

        gridLayout_4->addWidget(portNameBox, 1, 0, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_4->addWidget(label_5, 0, 1, 1, 1);

        baudBox = new QComboBox(layoutWidget_2);
        baudBox->addItem(QString());
        baudBox->addItem(QString());
        baudBox->addItem(QString());
        baudBox->addItem(QString());
        baudBox->setObjectName(QString::fromUtf8("baudBox"));
        sizePolicy.setHeightForWidth(baudBox->sizePolicy().hasHeightForWidth());
        baudBox->setSizePolicy(sizePolicy);
        baudBox->setFont(font);

        gridLayout_4->addWidget(baudBox, 1, 1, 1, 1);

        startBtn = new QPushButton(layoutWidget_2);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        sizePolicy.setHeightForWidth(startBtn->sizePolicy().hasHeightForWidth());
        startBtn->setSizePolicy(sizePolicy);
        startBtn->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        startBtn->setIcon(icon);

        gridLayout_4->addWidget(startBtn, 0, 2, 2, 1);

        stopBtn = new QPushButton(layoutWidget_2);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));
        sizePolicy.setHeightForWidth(stopBtn->sizePolicy().hasHeightForWidth());
        stopBtn->setSizePolicy(sizePolicy);
        stopBtn->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        stopBtn->setIcon(icon1);

        gridLayout_4->addWidget(stopBtn, 0, 3, 2, 1);

        gridLayout_4->setColumnStretch(0, 2);
        gridLayout_4->setColumnStretch(1, 2);
        gridLayout_4->setColumnStretch(2, 1);
        gridLayout_4->setColumnStretch(3, 1);
        infoBrowser = new QTextBrowser(SettingsDlg);
        infoBrowser->setObjectName(QString::fromUtf8("infoBrowser"));
        infoBrowser->setGeometry(QRect(10, 61, 381, 231));

        retranslateUi(SettingsDlg);

        baudBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SettingsDlg);
    } // setupUi

    void retranslateUi(QDialog *SettingsDlg)
    {
        SettingsDlg->setWindowTitle(QApplication::translate("SettingsDlg", "Serial Port Settings", nullptr));
        label_4->setText(QApplication::translate("SettingsDlg", "PORT NAME", nullptr));
        label_5->setText(QApplication::translate("SettingsDlg", "BAUDRATE", nullptr));
        baudBox->setItemText(0, QApplication::translate("SettingsDlg", "9600", nullptr));
        baudBox->setItemText(1, QApplication::translate("SettingsDlg", "19200", nullptr));
        baudBox->setItemText(2, QApplication::translate("SettingsDlg", "57600", nullptr));
        baudBox->setItemText(3, QApplication::translate("SettingsDlg", "115200", nullptr));

        startBtn->setText(QApplication::translate("SettingsDlg", "START", nullptr));
        stopBtn->setText(QApplication::translate("SettingsDlg", "STOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDlg: public Ui_SettingsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDLG_H
