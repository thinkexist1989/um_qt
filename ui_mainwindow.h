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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *idSpinBox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *GoalPosSpinBox;
    QPushButton *SetPosBtn;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QSpinBox *CurrentPosSpinBox;
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
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 20, 81, 21));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        idSpinBox = new QSpinBox(layoutWidget);
        idSpinBox->setObjectName(QString::fromUtf8("idSpinBox"));
        sizePolicy.setHeightForWidth(idSpinBox->sizePolicy().hasHeightForWidth());
        idSpinBox->setSizePolicy(sizePolicy);
        idSpinBox->setFont(font);
        idSpinBox->setMinimum(1);
        idSpinBox->setMaximum(6);

        gridLayout->addWidget(idSpinBox, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 3);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 20, 201, 22));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        GoalPosSpinBox = new QSpinBox(layoutWidget1);
        GoalPosSpinBox->setObjectName(QString::fromUtf8("GoalPosSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GoalPosSpinBox->sizePolicy().hasHeightForWidth());
        GoalPosSpinBox->setSizePolicy(sizePolicy1);
        GoalPosSpinBox->setFont(font);
        GoalPosSpinBox->setMaximum(4095);

        gridLayout_2->addWidget(GoalPosSpinBox, 0, 1, 1, 1);

        SetPosBtn = new QPushButton(layoutWidget1);
        SetPosBtn->setObjectName(QString::fromUtf8("SetPosBtn"));
        sizePolicy1.setHeightForWidth(SetPosBtn->sizePolicy().hasHeightForWidth());
        SetPosBtn->setSizePolicy(sizePolicy1);
        SetPosBtn->setFont(font);

        gridLayout_2->addWidget(SetPosBtn, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 5);
        gridLayout_2->setColumnStretch(1, 3);
        gridLayout_2->setColumnStretch(2, 5);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(190, 50, 139, 21));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        CurrentPosSpinBox = new QSpinBox(layoutWidget2);
        CurrentPosSpinBox->setObjectName(QString::fromUtf8("CurrentPosSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CurrentPosSpinBox->sizePolicy().hasHeightForWidth());
        CurrentPosSpinBox->setSizePolicy(sizePolicy2);
        CurrentPosSpinBox->setFont(font);
        CurrentPosSpinBox->setMaximum(4095);

        gridLayout_3->addWidget(CurrentPosSpinBox, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 5);
        gridLayout_3->setColumnStretch(1, 3);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
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
        label_2->setText(QApplication::translate("MainWindow", "ID:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Goal Position", nullptr));
        SetPosBtn->setText(QApplication::translate("MainWindow", "Set Position", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Current Position", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
