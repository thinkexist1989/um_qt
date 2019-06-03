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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SingleJointContrlDlg
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_2;
    QSpinBox *idSpinBox_1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *CurrentPosSpinBox_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *GoalPosSpinBox_1;
    QPushButton *SetPosBtn_1;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *idSpinBox_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *CurrentPosSpinBox_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *GoalPosSpinBox_2;
    QPushButton *SetPosBtn_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *idSpinBox_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpinBox *CurrentPosSpinBox_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpinBox *GoalPosSpinBox_3;
    QPushButton *SetPosBtn_3;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QLabel *label_14;
    QSpinBox *idSpinBox_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QSpinBox *CurrentPosSpinBox_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QSpinBox *GoalPosSpinBox_4;
    QPushButton *SetPosBtn_4;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QLabel *label_18;
    QSpinBox *idSpinBox_5;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QSpinBox *CurrentPosSpinBox_5;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QSpinBox *GoalPosSpinBox_5;
    QPushButton *SetPosBtn_5;

    void setupUi(QDialog *SingleJointContrlDlg)
    {
        if (SingleJointContrlDlg->objectName().isEmpty())
            SingleJointContrlDlg->setObjectName(QString::fromUtf8("SingleJointContrlDlg"));
        SingleJointContrlDlg->resize(530, 376);
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
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(SingleJointContrlDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setFrameShadow(QFrame::Plain);

        horizontalLayout->addWidget(label_4);

        label_2 = new QLabel(SingleJointContrlDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        horizontalLayout->addWidget(label_2);

        idSpinBox_1 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_1->setObjectName(QString::fromUtf8("idSpinBox_1"));
        sizePolicy.setHeightForWidth(idSpinBox_1->sizePolicy().hasHeightForWidth());
        idSpinBox_1->setSizePolicy(sizePolicy);
        idSpinBox_1->setFont(font);
        idSpinBox_1->setMinimum(1);
        idSpinBox_1->setMaximum(6);

        horizontalLayout->addWidget(idSpinBox_1);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(SingleJointContrlDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        CurrentPosSpinBox_1 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_1->setObjectName(QString::fromUtf8("CurrentPosSpinBox_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CurrentPosSpinBox_1->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_1->setSizePolicy(sizePolicy1);
        CurrentPosSpinBox_1->setFont(font);
        CurrentPosSpinBox_1->setMaximum(4095);

        horizontalLayout_3->addWidget(CurrentPosSpinBox_1);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(SingleJointContrlDlg);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setScaledContents(false);
        label->setWordWrap(true);

        horizontalLayout_2->addWidget(label);

        GoalPosSpinBox_1 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_1->setObjectName(QString::fromUtf8("GoalPosSpinBox_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GoalPosSpinBox_1->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_1->setSizePolicy(sizePolicy2);
        GoalPosSpinBox_1->setFont(font);
        GoalPosSpinBox_1->setMaximum(4095);

        horizontalLayout_2->addWidget(GoalPosSpinBox_1);

        SetPosBtn_1 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_1->setObjectName(QString::fromUtf8("SetPosBtn_1"));
        sizePolicy.setHeightForWidth(SetPosBtn_1->sizePolicy().hasHeightForWidth());
        SetPosBtn_1->setSizePolicy(sizePolicy);
        SetPosBtn_1->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/goalpos.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SetPosBtn_1->setIcon(icon);
        SetPosBtn_1->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(SetPosBtn_1);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(SingleJointContrlDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::WinPanel);
        label_5->setFrameShadow(QFrame::Plain);

        horizontalLayout_6->addWidget(label_5);

        label_6 = new QLabel(SingleJointContrlDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        horizontalLayout_6->addWidget(label_6);

        idSpinBox_2 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_2->setObjectName(QString::fromUtf8("idSpinBox_2"));
        sizePolicy.setHeightForWidth(idSpinBox_2->sizePolicy().hasHeightForWidth());
        idSpinBox_2->setSizePolicy(sizePolicy);
        idSpinBox_2->setFont(font);
        idSpinBox_2->setMinimum(1);
        idSpinBox_2->setMaximum(6);
        idSpinBox_2->setValue(2);

        horizontalLayout_6->addWidget(idSpinBox_2);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(SingleJointContrlDlg);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setWordWrap(true);

        horizontalLayout_7->addWidget(label_7);

        CurrentPosSpinBox_2 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_2->setObjectName(QString::fromUtf8("CurrentPosSpinBox_2"));
        sizePolicy1.setHeightForWidth(CurrentPosSpinBox_2->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_2->setSizePolicy(sizePolicy1);
        CurrentPosSpinBox_2->setFont(font);
        CurrentPosSpinBox_2->setMaximum(4095);

        horizontalLayout_7->addWidget(CurrentPosSpinBox_2);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(SingleJointContrlDlg);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font);
        label_8->setScaledContents(false);
        label_8->setWordWrap(true);

        horizontalLayout_8->addWidget(label_8);

        GoalPosSpinBox_2 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_2->setObjectName(QString::fromUtf8("GoalPosSpinBox_2"));
        sizePolicy2.setHeightForWidth(GoalPosSpinBox_2->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_2->setSizePolicy(sizePolicy2);
        GoalPosSpinBox_2->setFont(font);
        GoalPosSpinBox_2->setMaximum(4095);

        horizontalLayout_8->addWidget(GoalPosSpinBox_2);

        SetPosBtn_2 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_2->setObjectName(QString::fromUtf8("SetPosBtn_2"));
        sizePolicy.setHeightForWidth(SetPosBtn_2->sizePolicy().hasHeightForWidth());
        SetPosBtn_2->setSizePolicy(sizePolicy);
        SetPosBtn_2->setFont(font);
        SetPosBtn_2->setIcon(icon);
        SetPosBtn_2->setIconSize(QSize(30, 30));

        horizontalLayout_8->addWidget(SetPosBtn_2);


        horizontalLayout_5->addLayout(horizontalLayout_8);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_9 = new QLabel(SingleJointContrlDlg);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font1);
        label_9->setFrameShape(QFrame::WinPanel);
        label_9->setFrameShadow(QFrame::Plain);

        horizontalLayout_10->addWidget(label_9);

        label_10 = new QLabel(SingleJointContrlDlg);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font);
        label_10->setScaledContents(true);
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setWordWrap(true);

        horizontalLayout_10->addWidget(label_10);

        idSpinBox_3 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_3->setObjectName(QString::fromUtf8("idSpinBox_3"));
        sizePolicy.setHeightForWidth(idSpinBox_3->sizePolicy().hasHeightForWidth());
        idSpinBox_3->setSizePolicy(sizePolicy);
        idSpinBox_3->setFont(font);
        idSpinBox_3->setMinimum(1);
        idSpinBox_3->setMaximum(6);
        idSpinBox_3->setValue(3);

        horizontalLayout_10->addWidget(idSpinBox_3);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(SingleJointContrlDlg);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setWordWrap(true);

        horizontalLayout_11->addWidget(label_11);

        CurrentPosSpinBox_3 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_3->setObjectName(QString::fromUtf8("CurrentPosSpinBox_3"));
        sizePolicy1.setHeightForWidth(CurrentPosSpinBox_3->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_3->setSizePolicy(sizePolicy1);
        CurrentPosSpinBox_3->setFont(font);
        CurrentPosSpinBox_3->setMaximum(4095);

        horizontalLayout_11->addWidget(CurrentPosSpinBox_3);


        horizontalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(SingleJointContrlDlg);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font);
        label_12->setScaledContents(false);
        label_12->setWordWrap(true);

        horizontalLayout_12->addWidget(label_12);

        GoalPosSpinBox_3 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_3->setObjectName(QString::fromUtf8("GoalPosSpinBox_3"));
        sizePolicy2.setHeightForWidth(GoalPosSpinBox_3->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_3->setSizePolicy(sizePolicy2);
        GoalPosSpinBox_3->setFont(font);
        GoalPosSpinBox_3->setMaximum(4095);

        horizontalLayout_12->addWidget(GoalPosSpinBox_3);

        SetPosBtn_3 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_3->setObjectName(QString::fromUtf8("SetPosBtn_3"));
        sizePolicy.setHeightForWidth(SetPosBtn_3->sizePolicy().hasHeightForWidth());
        SetPosBtn_3->setSizePolicy(sizePolicy);
        SetPosBtn_3->setFont(font);
        SetPosBtn_3->setIcon(icon);
        SetPosBtn_3->setIconSize(QSize(30, 30));

        horizontalLayout_12->addWidget(SetPosBtn_3);


        horizontalLayout_9->addLayout(horizontalLayout_12);


        gridLayout->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_13 = new QLabel(SingleJointContrlDlg);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font1);
        label_13->setFrameShape(QFrame::WinPanel);
        label_13->setFrameShadow(QFrame::Plain);

        horizontalLayout_14->addWidget(label_13);

        label_14 = new QLabel(SingleJointContrlDlg);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setFont(font);
        label_14->setScaledContents(true);
        label_14->setAlignment(Qt::AlignCenter);
        label_14->setWordWrap(true);

        horizontalLayout_14->addWidget(label_14);

        idSpinBox_4 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_4->setObjectName(QString::fromUtf8("idSpinBox_4"));
        sizePolicy.setHeightForWidth(idSpinBox_4->sizePolicy().hasHeightForWidth());
        idSpinBox_4->setSizePolicy(sizePolicy);
        idSpinBox_4->setFont(font);
        idSpinBox_4->setMinimum(1);
        idSpinBox_4->setMaximum(6);
        idSpinBox_4->setValue(4);

        horizontalLayout_14->addWidget(idSpinBox_4);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(SingleJointContrlDlg);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setWordWrap(true);

        horizontalLayout_15->addWidget(label_15);

        CurrentPosSpinBox_4 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_4->setObjectName(QString::fromUtf8("CurrentPosSpinBox_4"));
        sizePolicy1.setHeightForWidth(CurrentPosSpinBox_4->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_4->setSizePolicy(sizePolicy1);
        CurrentPosSpinBox_4->setFont(font);
        CurrentPosSpinBox_4->setMaximum(4095);

        horizontalLayout_15->addWidget(CurrentPosSpinBox_4);


        horizontalLayout_13->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(SingleJointContrlDlg);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setFont(font);
        label_16->setScaledContents(false);
        label_16->setWordWrap(true);

        horizontalLayout_16->addWidget(label_16);

        GoalPosSpinBox_4 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_4->setObjectName(QString::fromUtf8("GoalPosSpinBox_4"));
        sizePolicy2.setHeightForWidth(GoalPosSpinBox_4->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_4->setSizePolicy(sizePolicy2);
        GoalPosSpinBox_4->setFont(font);
        GoalPosSpinBox_4->setMaximum(4095);

        horizontalLayout_16->addWidget(GoalPosSpinBox_4);

        SetPosBtn_4 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_4->setObjectName(QString::fromUtf8("SetPosBtn_4"));
        sizePolicy.setHeightForWidth(SetPosBtn_4->sizePolicy().hasHeightForWidth());
        SetPosBtn_4->setSizePolicy(sizePolicy);
        SetPosBtn_4->setFont(font);
        SetPosBtn_4->setIcon(icon);
        SetPosBtn_4->setIconSize(QSize(30, 30));

        horizontalLayout_16->addWidget(SetPosBtn_4);


        horizontalLayout_13->addLayout(horizontalLayout_16);


        gridLayout->addLayout(horizontalLayout_13, 3, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_17 = new QLabel(SingleJointContrlDlg);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setFont(font1);
        label_17->setFrameShape(QFrame::WinPanel);
        label_17->setFrameShadow(QFrame::Plain);

        horizontalLayout_18->addWidget(label_17);

        label_18 = new QLabel(SingleJointContrlDlg);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setFont(font);
        label_18->setScaledContents(true);
        label_18->setAlignment(Qt::AlignCenter);
        label_18->setWordWrap(true);

        horizontalLayout_18->addWidget(label_18);

        idSpinBox_5 = new QSpinBox(SingleJointContrlDlg);
        idSpinBox_5->setObjectName(QString::fromUtf8("idSpinBox_5"));
        sizePolicy.setHeightForWidth(idSpinBox_5->sizePolicy().hasHeightForWidth());
        idSpinBox_5->setSizePolicy(sizePolicy);
        idSpinBox_5->setFont(font);
        idSpinBox_5->setMinimum(1);
        idSpinBox_5->setMaximum(6);
        idSpinBox_5->setValue(5);

        horizontalLayout_18->addWidget(idSpinBox_5);


        horizontalLayout_17->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_19 = new QLabel(SingleJointContrlDlg);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);
        label_19->setWordWrap(true);

        horizontalLayout_19->addWidget(label_19);

        CurrentPosSpinBox_5 = new QSpinBox(SingleJointContrlDlg);
        CurrentPosSpinBox_5->setObjectName(QString::fromUtf8("CurrentPosSpinBox_5"));
        sizePolicy1.setHeightForWidth(CurrentPosSpinBox_5->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox_5->setSizePolicy(sizePolicy1);
        CurrentPosSpinBox_5->setFont(font);
        CurrentPosSpinBox_5->setMaximum(4095);

        horizontalLayout_19->addWidget(CurrentPosSpinBox_5);


        horizontalLayout_17->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(SingleJointContrlDlg);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setFont(font);
        label_20->setScaledContents(false);
        label_20->setWordWrap(true);

        horizontalLayout_20->addWidget(label_20);

        GoalPosSpinBox_5 = new QSpinBox(SingleJointContrlDlg);
        GoalPosSpinBox_5->setObjectName(QString::fromUtf8("GoalPosSpinBox_5"));
        sizePolicy2.setHeightForWidth(GoalPosSpinBox_5->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox_5->setSizePolicy(sizePolicy2);
        GoalPosSpinBox_5->setFont(font);
        GoalPosSpinBox_5->setMaximum(4095);

        horizontalLayout_20->addWidget(GoalPosSpinBox_5);

        SetPosBtn_5 = new QPushButton(SingleJointContrlDlg);
        SetPosBtn_5->setObjectName(QString::fromUtf8("SetPosBtn_5"));
        sizePolicy.setHeightForWidth(SetPosBtn_5->sizePolicy().hasHeightForWidth());
        SetPosBtn_5->setSizePolicy(sizePolicy);
        SetPosBtn_5->setFont(font);
        SetPosBtn_5->setIcon(icon);
        SetPosBtn_5->setIconSize(QSize(30, 30));

        horizontalLayout_20->addWidget(SetPosBtn_5);


        horizontalLayout_17->addLayout(horizontalLayout_20);


        gridLayout->addLayout(horizontalLayout_17, 4, 0, 1, 1);


        retranslateUi(SingleJointContrlDlg);

        QMetaObject::connectSlotsByName(SingleJointContrlDlg);
    } // setupUi

    void retranslateUi(QDialog *SingleJointContrlDlg)
    {
        SingleJointContrlDlg->setWindowTitle(QApplication::translate("SingleJointContrlDlg", "SingleJointContrlDlg", nullptr));
        label_4->setText(QApplication::translate("SingleJointContrlDlg", "JOINT1", nullptr));
        label_2->setText(QApplication::translate("SingleJointContrlDlg", "ID", nullptr));
        label_3->setText(QApplication::translate("SingleJointContrlDlg", "CURRENT POSITION", nullptr));
        label->setText(QApplication::translate("SingleJointContrlDlg", "GOAL POSITION", nullptr));
        SetPosBtn_1->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        label_5->setText(QApplication::translate("SingleJointContrlDlg", "JOINT2", nullptr));
        label_6->setText(QApplication::translate("SingleJointContrlDlg", "ID", nullptr));
        label_7->setText(QApplication::translate("SingleJointContrlDlg", "CURRENT POSITION", nullptr));
        label_8->setText(QApplication::translate("SingleJointContrlDlg", "GOAL POSITION", nullptr));
        SetPosBtn_2->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        label_9->setText(QApplication::translate("SingleJointContrlDlg", "JOINT3", nullptr));
        label_10->setText(QApplication::translate("SingleJointContrlDlg", "ID", nullptr));
        label_11->setText(QApplication::translate("SingleJointContrlDlg", "CURRENT POSITION", nullptr));
        label_12->setText(QApplication::translate("SingleJointContrlDlg", "GOAL POSITION", nullptr));
        SetPosBtn_3->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        label_13->setText(QApplication::translate("SingleJointContrlDlg", "JOINT4", nullptr));
        label_14->setText(QApplication::translate("SingleJointContrlDlg", "ID", nullptr));
        label_15->setText(QApplication::translate("SingleJointContrlDlg", "CURRENT POSITION", nullptr));
        label_16->setText(QApplication::translate("SingleJointContrlDlg", "GOAL POSITION", nullptr));
        SetPosBtn_4->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
        label_17->setText(QApplication::translate("SingleJointContrlDlg", "JOINT5", nullptr));
        label_18->setText(QApplication::translate("SingleJointContrlDlg", "ID", nullptr));
        label_19->setText(QApplication::translate("SingleJointContrlDlg", "CURRENT POSITION", nullptr));
        label_20->setText(QApplication::translate("SingleJointContrlDlg", "GOAL POSITION", nullptr));
        SetPosBtn_5->setText(QApplication::translate("SingleJointContrlDlg", "SET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SingleJointContrlDlg: public Ui_SingleJointContrlDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEJOINTCONTRLDLG_H
