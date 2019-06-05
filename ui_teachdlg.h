/********************************************************************************
** Form generated from reading UI file 'teachdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHDLG_H
#define UI_TEACHDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_TeachDlg
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *csvBtn;
    QPushButton *startBtn;
    QTextBrowser *infoBrowser;

    void setupUi(QDialog *TeachDlg)
    {
        if (TeachDlg->objectName().isEmpty())
            TeachDlg->setObjectName(QString::fromUtf8("TeachDlg"));
        TeachDlg->resize(692, 436);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        TeachDlg->setFont(font);
        gridLayout_2 = new QGridLayout(TeachDlg);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        csvBtn = new QPushButton(TeachDlg);
        csvBtn->setObjectName(QString::fromUtf8("csvBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/file.ico"), QSize(), QIcon::Normal, QIcon::Off);
        csvBtn->setIcon(icon);

        gridLayout->addWidget(csvBtn, 0, 0, 1, 1);

        startBtn = new QPushButton(TeachDlg);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        startBtn->setIcon(icon1);

        gridLayout->addWidget(startBtn, 0, 1, 1, 1);

        infoBrowser = new QTextBrowser(TeachDlg);
        infoBrowser->setObjectName(QString::fromUtf8("infoBrowser"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        infoBrowser->setFont(font1);

        gridLayout->addWidget(infoBrowser, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(TeachDlg);

        QMetaObject::connectSlotsByName(TeachDlg);
    } // setupUi

    void retranslateUi(QDialog *TeachDlg)
    {
        TeachDlg->setWindowTitle(QApplication::translate("TeachDlg", "Teaching Dialog", nullptr));
        csvBtn->setText(QApplication::translate("TeachDlg", "OPEN CSV FILE", nullptr));
        startBtn->setText(QApplication::translate("TeachDlg", "EXEC TEACHING", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeachDlg: public Ui_TeachDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHDLG_H
