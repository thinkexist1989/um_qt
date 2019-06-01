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
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *idSpinBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *GoalPosSpinBox;
    QPushButton *SetPosBtn;
    QGridLayout *gridLayout_3;
    QSpinBox *CurrentPosSpinBox;
    QLabel *label_3;
    QGridLayout *glLayout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(657, 504);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/robot_arm.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8(":/icons/start.ico");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/icons/setting.ico"), QSize(), QIcon::Normal, QIcon::Off);
            icon1.addFile(QString::fromUtf8(":/icons/setting.ico"), QSize(), QIcon::Normal, QIcon::On);
        }
        actionSettings->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        idSpinBox = new QSpinBox(centralWidget);
        idSpinBox->setObjectName(QString::fromUtf8("idSpinBox"));
        sizePolicy.setHeightForWidth(idSpinBox->sizePolicy().hasHeightForWidth());
        idSpinBox->setSizePolicy(sizePolicy);
        idSpinBox->setFont(font);
        idSpinBox->setMinimum(1);
        idSpinBox->setMaximum(6);

        gridLayout->addWidget(idSpinBox, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 3);

        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setScaledContents(false);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        GoalPosSpinBox = new QSpinBox(centralWidget);
        GoalPosSpinBox->setObjectName(QString::fromUtf8("GoalPosSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GoalPosSpinBox->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox->setSizePolicy(sizePolicy1);
        GoalPosSpinBox->setFont(font);
        GoalPosSpinBox->setMaximum(4095);

        gridLayout_2->addWidget(GoalPosSpinBox, 0, 1, 1, 1);

        SetPosBtn = new QPushButton(centralWidget);
        SetPosBtn->setObjectName(QString::fromUtf8("SetPosBtn"));
        sizePolicy.setHeightForWidth(SetPosBtn->sizePolicy().hasHeightForWidth());
        SetPosBtn->setSizePolicy(sizePolicy);
        SetPosBtn->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/goalpos.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SetPosBtn->setIcon(icon2);
        SetPosBtn->setIconSize(QSize(30, 30));

        gridLayout_2->addWidget(SetPosBtn, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 5);
        gridLayout_2->setColumnStretch(1, 3);
        gridLayout_2->setColumnStretch(2, 3);

        gridLayout_4->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        CurrentPosSpinBox = new QSpinBox(centralWidget);
        CurrentPosSpinBox->setObjectName(QString::fromUtf8("CurrentPosSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CurrentPosSpinBox->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox->setSizePolicy(sizePolicy2);
        CurrentPosSpinBox->setFont(font);
        CurrentPosSpinBox->setMaximum(4095);

        gridLayout_3->addWidget(CurrentPosSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setWordWrap(true);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 3);
        gridLayout_3->setColumnStretch(1, 2);

        gridLayout_4->addLayout(gridLayout_3, 0, 2, 1, 1);

        glLayout = new QGridLayout();
        glLayout->setSpacing(6);
        glLayout->setObjectName(QString::fromUtf8("glLayout"));

        gridLayout_4->addLayout(glLayout, 1, 0, 1, 3);

        gridLayout_4->setRowStretch(0, 1);
        gridLayout_4->setRowStretch(1, 6);
        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 4);
        gridLayout_4->setColumnStretch(2, 2);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(20, 20));
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionSettings);

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
        label_2->setText(QApplication::translate("MainWindow", "ID", nullptr));
        label->setText(QApplication::translate("MainWindow", "GOAL POSITION", nullptr));
        SetPosBtn->setText(QApplication::translate("MainWindow", "SET", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "CURRENT POSITION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
