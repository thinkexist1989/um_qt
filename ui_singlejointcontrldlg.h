/********************************************************************************
** Form generated from reading UI file 'singlejointcontrldlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEJOINTCONTRLDLG_H
#define UI_SINGLEJOINTCONTRLDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SingleJointContrlDlg
{
public:
    QGridLayout *gridLayout;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer;
    QSpinBox *GoalPosSpinBox_1;
    QSpinBox *GoalPosSpinBox_5;
    QPushButton *SetPosBtn_3;
    QSpinBox *idSpinBox_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SetPosBtn_4;
    QLabel *label_17;
    QLabel *label_9;
    QSpinBox *GoalPosSpinBox_3;
    QSpinBox *CurrentPosSpinBox_2;
    QLabel *label_4;
    QLabel *label_3;
    QSpinBox *CurrentPosSpinBox_4;
    QSpinBox *CurrentPosSpinBox_5;
    QSpinBox *idSpinBox_4;
    QPushButton *SetPosBtn_2;
    QSpinBox *CurrentPosSpinBox_3;
    QSpinBox *idSpinBox_1;
    QSpinBox *GoalPosSpinBox_2;
    QPushButton *SetPosBtn_5;
    QSpinBox *CurrentPosSpinBox_1;
    QSpinBox *idSpinBox_5;
    QPushButton *SetPosBtn_1;
    QSpinBox *GoalPosSpinBox_4;
    QLabel *label_5;
    QSpinBox *idSpinBox_3;
    QLabel *label;

    void setupUi(QDialog *SingleJointContrlDlg)
    {
        if (SingleJointContrlDlg->objectName().isEmpty())
            SingleJointContrlDlg->setObjectName(QString::fromUtf8("SingleJointContrlDlg"));
        SingleJointContrlDlg->resize(479, 240);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        SingleJointContrlDlg->setFont(font);
        gridLayout = new QGridLayout(SingleJointContrlDlg);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_13 = new QLabel(SingleJointContrlDlg);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_13->setFont(font1);
        label_13->setFrameShape(QFrame::WinPanel);
        label_13->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        GoalPosSpinBox_1 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_1->setObjectName(QString::fromUtf8("GoalPosSpinBox_1"));
        sizePolicy.setHeightForWidth(GoalPosSpinBox_1->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_1->setSizePolicy(sizePolicy);
        GoalPosSpinBox_1->setFont(font);
        GoalPosSpinBox_1->setMaximum(4095);

        gridLayout->addWidget(GoalPosSpinBox_1, 1, 3, 1, 1);

        GoalPosSpinBox_5 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_5->setObjectName(QString::fromUtf8("GoalPosSpinBox_5"));
        sizePolicy.setHeightForWidth(GoalPosSpinBox_5->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_5->setSizePolicy(sizePolicy);
        GoalPosSpinBox_5->setFont(font);
        GoalPosSpinBox_5->setMaximum(4095);

        gridLayout->addWidget(GoalPosSpinBox_5, 5, 3, 1, 1);

        SetPosBtn_3 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_3->setObjectName(QString::fromUtf8("SetPosBtn_3"));
        sizePolicy.setHeightForWidth(SetPosBtn_3->sizePolicy().hasHeightForWidth());
        SetPosBtn_3->setSizePolicy(sizePolicy);
        SetPosBtn_3->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/goalpos.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SetPosBtn_3->setIcon(icon);
        SetPosBtn_3->setIconSize(QSize(30, 30));

        gridLayout->addWidget(SetPosBtn_3, 3, 4, 1, 2);

        idSpinBox_2 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_2->setObjectName(QString::fromUtf8("idSpinBox_2"));
        idSpinBox_2->setEnabled(false);
        sizePolicy.setHeightForWidth(idSpinBox_2->sizePolicy().hasHeightForWidth());
        idSpinBox_2->setSizePolicy(sizePolicy);
        idSpinBox_2->setFont(font);
        idSpinBox_2->setMinimum(1);
        idSpinBox_2->setMaximum(6);
        idSpinBox_2->setValue(2);

        gridLayout->addWidget(idSpinBox_2, 2, 1, 1, 1);

        label_2 = new QLabel(SingleJointContrlDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        SetPosBtn_4 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_4->setObjectName(QString::fromUtf8("SetPosBtn_4"));
        sizePolicy.setHeightForWidth(SetPosBtn_4->sizePolicy().hasHeightForWidth());
        SetPosBtn_4->setSizePolicy(sizePolicy);
        SetPosBtn_4->setFont(font);
        SetPosBtn_4->setIcon(icon);
        SetPosBtn_4->setIconSize(QSize(30, 30));

        gridLayout->addWidget(SetPosBtn_4, 4, 4, 1, 2);

        label_17 = new QLabel(SingleJointContrlDlg);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setFont(font1);
        label_17->setFrameShape(QFrame::WinPanel);
        label_17->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_17, 5, 0, 1, 1);

        label_9 = new QLabel(SingleJointContrlDlg);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font1);
        label_9->setFrameShape(QFrame::WinPanel);
        label_9->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        GoalPosSpinBox_3 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_3->setObjectName(QString::fromUtf8("GoalPosSpinBox_3"));
        sizePolicy.setHeightForWidth(GoalPosSpinBox_3->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_3->setSizePolicy(sizePolicy);
        GoalPosSpinBox_3->setFont(font);
        GoalPosSpinBox_3->setMaximum(4095);

        gridLayout->addWidget(GoalPosSpinBox_3, 3, 3, 1, 1);

        CurrentPosSpinBox_2 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_2->setObjectName(QString::fromUtf8("CurrentPosSpinBox_2"));
        CurrentPosSpinBox_2->setEnabled(false);
        sizePolicy.setHeightForWidth(CurrentPosSpinBox_2->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_2->setSizePolicy(sizePolicy);
        CurrentPosSpinBox_2->setFont(font);
        CurrentPosSpinBox_2->setMaximum(4095);

        gridLayout->addWidget(CurrentPosSpinBox_2, 2, 2, 1, 1);

        label_4 = new QLabel(SingleJointContrlDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(SingleJointContrlDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        CurrentPosSpinBox_4 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_4->setObjectName(QString::fromUtf8("CurrentPosSpinBox_4"));
        CurrentPosSpinBox_4->setEnabled(false);
        sizePolicy.setHeightForWidth(CurrentPosSpinBox_4->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_4->setSizePolicy(sizePolicy);
        CurrentPosSpinBox_4->setFont(font);
        CurrentPosSpinBox_4->setMaximum(4095);

        gridLayout->addWidget(CurrentPosSpinBox_4, 4, 2, 1, 1);

        CurrentPosSpinBox_5 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_5->setObjectName(QString::fromUtf8("CurrentPosSpinBox_5"));
        CurrentPosSpinBox_5->setEnabled(false);
        sizePolicy.setHeightForWidth(CurrentPosSpinBox_5->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_5->setSizePolicy(sizePolicy);
        CurrentPosSpinBox_5->setFont(font);
        CurrentPosSpinBox_5->setMaximum(4095);

        gridLayout->addWidget(CurrentPosSpinBox_5, 5, 2, 1, 1);

        idSpinBox_4 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_4->setObjectName(QString::fromUtf8("idSpinBox_4"));
        idSpinBox_4->setEnabled(false);
        sizePolicy.setHeightForWidth(idSpinBox_4->sizePolicy().hasHeightForWidth());
        idSpinBox_4->setSizePolicy(sizePolicy);
        idSpinBox_4->setFont(font);
        idSpinBox_4->setMinimum(1);
        idSpinBox_4->setMaximum(6);
        idSpinBox_4->setValue(4);

        gridLayout->addWidget(idSpinBox_4, 4, 1, 1, 1);

        SetPosBtn_2 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_2->setObjectName(QString::fromUtf8("SetPosBtn_2"));
        sizePolicy.setHeightForWidth(SetPosBtn_2->sizePolicy().hasHeightForWidth());
        SetPosBtn_2->setSizePolicy(sizePolicy);
        SetPosBtn_2->setFont(font);
        SetPosBtn_2->setIcon(icon);
        SetPosBtn_2->setIconSize(QSize(30, 30));

        gridLayout->addWidget(SetPosBtn_2, 2, 4, 1, 2);

        CurrentPosSpinBox_3 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_3->setObjectName(QString::fromUtf8("CurrentPosSpinBox_3"));
        CurrentPosSpinBox_3->setEnabled(false);
        sizePolicy.setHeightForWidth(CurrentPosSpinBox_3->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_3->setSizePolicy(sizePolicy);
        CurrentPosSpinBox_3->setFont(font);
        CurrentPosSpinBox_3->setMaximum(4095);

        gridLayout->addWidget(CurrentPosSpinBox_3, 3, 2, 1, 1);

        idSpinBox_1 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_1->setObjectName(QString::fromUtf8("idSpinBox_1"));
        idSpinBox_1->setEnabled(false);
        sizePolicy.setHeightForWidth(idSpinBox_1->sizePolicy().hasHeightForWidth());
        idSpinBox_1->setSizePolicy(sizePolicy);
        idSpinBox_1->setFont(font);
        idSpinBox_1->setMinimum(1);
        idSpinBox_1->setMaximum(6);

        gridLayout->addWidget(idSpinBox_1, 1, 1, 1, 1);

        GoalPosSpinBox_2 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_2->setObjectName(QString::fromUtf8("GoalPosSpinBox_2"));
        sizePolicy.setHeightForWidth(GoalPosSpinBox_2->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_2->setSizePolicy(sizePolicy);
        GoalPosSpinBox_2->setFont(font);
        GoalPosSpinBox_2->setMaximum(4095);

        gridLayout->addWidget(GoalPosSpinBox_2, 2, 3, 1, 1);

        SetPosBtn_5 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_5->setObjectName(QString::fromUtf8("SetPosBtn_5"));
        sizePolicy.setHeightForWidth(SetPosBtn_5->sizePolicy().hasHeightForWidth());
        SetPosBtn_5->setSizePolicy(sizePolicy);
        SetPosBtn_5->setFont(font);
        SetPosBtn_5->setIcon(icon);
        SetPosBtn_5->setIconSize(QSize(30, 30));

        gridLayout->addWidget(SetPosBtn_5, 5, 4, 1, 2);

        CurrentPosSpinBox_1 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_1->setObjectName(QString::fromUtf8("CurrentPosSpinBox_1"));
        CurrentPosSpinBox_1->setEnabled(false);
        sizePolicy.setHeightForWidth(CurrentPosSpinBox_1->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_1->setSizePolicy(sizePolicy);
        CurrentPosSpinBox_1->setFont(font);
        CurrentPosSpinBox_1->setMaximum(4095);

        gridLayout->addWidget(CurrentPosSpinBox_1, 1, 2, 1, 1);

        idSpinBox_5 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_5->setObjectName(QString::fromUtf8("idSpinBox_5"));
        idSpinBox_5->setEnabled(false);
        sizePolicy.setHeightForWidth(idSpinBox_5->sizePolicy().hasHeightForWidth());
        idSpinBox_5->setSizePolicy(sizePolicy);
        idSpinBox_5->setFont(font);
        idSpinBox_5->setMinimum(1);
        idSpinBox_5->setMaximum(6);
        idSpinBox_5->setValue(5);

        gridLayout->addWidget(idSpinBox_5, 5, 1, 1, 1);

        SetPosBtn_1 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_1->setObjectName(QString::fromUtf8("SetPosBtn_1"));
        sizePolicy.setHeightForWidth(SetPosBtn_1->sizePolicy().hasHeightForWidth());
        SetPosBtn_1->setSizePolicy(sizePolicy);
        SetPosBtn_1->setFont(font);
        SetPosBtn_1->setIcon(icon);
        SetPosBtn_1->setIconSize(QSize(30, 30));

        gridLayout->addWidget(SetPosBtn_1, 1, 4, 1, 2);

        GoalPosSpinBox_4 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_4->setObjectName(QString::fromUtf8("GoalPosSpinBox_4"));
        sizePolicy.setHeightForWidth(GoalPosSpinBox_4->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_4->setSizePolicy(sizePolicy);
        GoalPosSpinBox_4->setFont(font);
        GoalPosSpinBox_4->setMaximum(4095);

        gridLayout->addWidget(GoalPosSpinBox_4, 4, 3, 1, 1);

        label_5 = new QLabel(SingleJointContrlDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::WinPanel);
        label_5->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        idSpinBox_3 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_3->setObjectName(QString::fromUtf8("idSpinBox_3"));
        idSpinBox_3->setEnabled(false);
        sizePolicy.setHeightForWidth(idSpinBox_3->sizePolicy().hasHeightForWidth());
        idSpinBox_3->setSizePolicy(sizePolicy);
        idSpinBox_3->setFont(font);
        idSpinBox_3->setMinimum(1);
        idSpinBox_3->setMaximum(6);
        idSpinBox_3->setValue(3);

        gridLayout->addWidget(idSpinBox_3, 3, 1, 1, 1);

        label = new QLabel(SingleJointContrlDlg);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setScaledContents(false);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 3, 1, 1);


        retranslateUi(SingleJointContrlDlg);

        QMetaObject::connectSlotsByName(SingleJointContrlDlg);
    } // setupUi

    void retranslateUi(QDialog *SingleJointContrlDlg)
    {
        SingleJointContrlDlg->setWindowTitle(QApplication::translate("SingleJointContrlDlg", "SingleJointContrlDlg", nullptr));
        label_13->setText(QApplication::translate("SingleJointContrlDlg", "JOINT4", nullptr));
        SetPosBtn_3->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        label_2->setText(QApplication::translate("SingleJointContrlDlg", "ID", nullptr));
        SetPosBtn_4->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        label_17->setText(QApplication::translate("SingleJointContrlDlg", "JOINT5", nullptr));
        label_9->setText(QApplication::translate("SingleJointContrlDlg", "JOINT3", nullptr));
        label_4->setText(QApplication::translate("SingleJointContrlDlg", "JOINT1", nullptr));
        label_3->setText(QApplication::translate("SingleJointContrlDlg", "CURRENT POSITION", nullptr));
        SetPosBtn_2->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        SetPosBtn_5->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        SetPosBtn_1->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        label_5->setText(QApplication::translate("SingleJointContrlDlg", "JOINT2", nullptr));
        label->setText(QApplication::translate("SingleJointContrlDlg", "GOAL\n"
"POSITION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SingleJointContrlDlg: public Ui_SingleJointContrlDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEJOINTCONTRLDLG_H
