/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionSingleJointControl;
    QAction *actionAbout;
    QAction *actionTeach;
    QAction *actionMode;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_2;
    QSpinBox *idSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *CurrentPosSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *GoalPosSpinBox;
    QPushButton *SetPosBtn;
    QGridLayout *glLayout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(694, 519);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/robot_arm.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8(":/icons/settings2.ico");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/icons/settings2.ico"), QSize(), QIcon::Normal, QIcon::Off);
            icon1.addFile(QString::fromUtf8(":/icons/settings2.ico"), QSize(), QIcon::Normal, QIcon::On);
        }
        actionSettings->setIcon(icon1);
        actionSingleJointControl = new QAction(MainWindow);
        actionSingleJointControl->setObjectName(QString::fromUtf8("actionSingleJointControl"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/tools.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icons/tools.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionSingleJointControl->setIcon(icon2);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/about.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionAbout->setIcon(icon3);
        actionTeach = new QAction(MainWindow);
        actionTeach->setObjectName(QString::fromUtf8("actionTeach"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/planning.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icons/planning.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionTeach->setIcon(icon4);
        actionMode = new QAction(MainWindow);
        actionMode->setObjectName(QString::fromUtf8("actionMode"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/switcher.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMode->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setFrameShadow(QFrame::Plain);

        horizontalLayout_3->addWidget(label_4);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        horizontalLayout_3->addWidget(label_2);

        idSpinBox = new QSpinBox(centralWidget);
        idSpinBox->setObjectName(QString::fromUtf8("idSpinBox"));
        sizePolicy.setHeightForWidth(idSpinBox->sizePolicy().hasHeightForWidth());
        idSpinBox->setSizePolicy(sizePolicy);
        idSpinBox->setFont(font1);
        idSpinBox->setMinimum(1);
        idSpinBox->setMaximum(5);

        horizontalLayout_3->addWidget(idSpinBox);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setWordWrap(true);

        horizontalLayout_2->addWidget(label_3);

        CurrentPosSpinBox = new QSpinBox(centralWidget);
        CurrentPosSpinBox->setObjectName(QString::fromUtf8("CurrentPosSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CurrentPosSpinBox->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox->setSizePolicy(sizePolicy1);
        CurrentPosSpinBox->setFont(font1);
        CurrentPosSpinBox->setMaximum(4095);

        horizontalLayout_2->addWidget(CurrentPosSpinBox);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font1);
        label->setScaledContents(false);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        GoalPosSpinBox = new QSpinBox(centralWidget);
        GoalPosSpinBox->setObjectName(QString::fromUtf8("GoalPosSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GoalPosSpinBox->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox->setSizePolicy(sizePolicy2);
        GoalPosSpinBox->setFont(font1);
        GoalPosSpinBox->setMaximum(4095);

        horizontalLayout->addWidget(GoalPosSpinBox);

        SetPosBtn = new QPushButton(centralWidget);
        SetPosBtn->setObjectName(QString::fromUtf8("SetPosBtn"));
        sizePolicy.setHeightForWidth(SetPosBtn->sizePolicy().hasHeightForWidth());
        SetPosBtn->setSizePolicy(sizePolicy);
        SetPosBtn->setFont(font1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/goalpos.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SetPosBtn->setIcon(icon6);
        SetPosBtn->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(SetPosBtn);


        horizontalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        glLayout = new QGridLayout();
        glLayout->setSpacing(6);
        glLayout->setObjectName(QString::fromUtf8("glLayout"));

        gridLayout->addLayout(glLayout, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 8);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(50, 50));
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionSettings);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMode);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSingleJointControl);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTeach);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Underwater Manipulator Control", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "START", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("MainWindow", "start serial port", nullptr));
#endif // QT_NO_TOOLTIP
        actionSingleJointControl->setText(QApplication::translate("MainWindow", "START", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSingleJointControl->setToolTip(QApplication::translate("MainWindow", "Single Joint Control", nullptr));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("MainWindow", "START", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About", nullptr));
#endif // QT_NO_TOOLTIP
        actionTeach->setText(QApplication::translate("MainWindow", "START", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTeach->setToolTip(QApplication::translate("MainWindow", "Teach Programming", nullptr));
#endif // QT_NO_TOOLTIP
        actionMode->setText(QApplication::translate("MainWindow", "MODE", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMode->setToolTip(QApplication::translate("MainWindow", "Switch Dynamixel Mode", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "JOINT", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "ID", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "CURRENT POSITION", nullptr));
        label->setText(QApplication::translate("MainWindow", "GOAL POSITION", nullptr));
        SetPosBtn->setText(QApplication::translate("MainWindow", "SET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
