/********************************************************************************
** Form generated from reading UI file 'switchmodedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHMODEDLG_H
#define UI_SWITCHMODEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SwitchModeDlg
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label;
    QLineEdit *lineEdit_mode1;
    QSpinBox *minBox_1;
    QSpinBox *maxBox_1;
    QSpinBox *pBox_1;
    QSpinBox *iBox_1;
    QSpinBox *dBox_1;
    QLabel *label_3;
    QLineEdit *lineEdit_mode2;
    QSpinBox *minBox_2;
    QSpinBox *maxBox_2;
    QSpinBox *pBox_2;
    QSpinBox *iBox_2;
    QSpinBox *dBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit_mode3;
    QSpinBox *minBox_3;
    QSpinBox *maxBox_3;
    QSpinBox *pBox_3;
    QSpinBox *iBox_3;
    QSpinBox *dBox_3;
    QLabel *label_5;
    QLineEdit *lineEdit_mode4;
    QSpinBox *minBox_4;
    QSpinBox *maxBox_4;
    QSpinBox *pBox_4;
    QSpinBox *iBox_4;
    QSpinBox *dBox_4;
    QLabel *label_6;
    QLineEdit *lineEdit_mode5;
    QSpinBox *minBox_5;
    QSpinBox *maxBox_5;
    QSpinBox *pBox_5;
    QSpinBox *iBox_5;
    QSpinBox *dBox_5;

    void setupUi(QDialog *SwitchModeDlg)
    {
        if (SwitchModeDlg->objectName().isEmpty())
            SwitchModeDlg->setObjectName(QString::fromUtf8("SwitchModeDlg"));
        SwitchModeDlg->resize(523, 171);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        SwitchModeDlg->setFont(font);
        gridLayout = new QGridLayout(SwitchModeDlg);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_2 = new QLabel(SwitchModeDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_7 = new QLabel(SwitchModeDlg);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_8 = new QLabel(SwitchModeDlg);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_8, 0, 3, 1, 1);

        label_9 = new QLabel(SwitchModeDlg);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_9, 0, 4, 1, 1);

        label_10 = new QLabel(SwitchModeDlg);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_10, 0, 5, 1, 1);

        label_11 = new QLabel(SwitchModeDlg);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_11, 0, 6, 1, 1);

        label = new QLabel(SwitchModeDlg);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setUnderline(true);
        label->setFont(font1);
        label->setFrameShape(QFrame::WinPanel);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit_mode1 = new QLineEdit(SwitchModeDlg);
        lineEdit_mode1->setObjectName(QString::fromUtf8("lineEdit_mode1"));
        sizePolicy.setHeightForWidth(lineEdit_mode1->sizePolicy().hasHeightForWidth());
        lineEdit_mode1->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lineEdit_mode1->setFont(font2);
        lineEdit_mode1->setReadOnly(true);

        gridLayout->addWidget(lineEdit_mode1, 1, 1, 1, 1);

        minBox_1 = new QSpinBox(SwitchModeDlg);
        minBox_1->setObjectName(QString::fromUtf8("minBox_1"));
        sizePolicy.setHeightForWidth(minBox_1->sizePolicy().hasHeightForWidth());
        minBox_1->setSizePolicy(sizePolicy);
        minBox_1->setFont(font2);

        gridLayout->addWidget(minBox_1, 1, 2, 1, 1);

        maxBox_1 = new QSpinBox(SwitchModeDlg);
        maxBox_1->setObjectName(QString::fromUtf8("maxBox_1"));
        sizePolicy.setHeightForWidth(maxBox_1->sizePolicy().hasHeightForWidth());
        maxBox_1->setSizePolicy(sizePolicy);
        maxBox_1->setFont(font2);

        gridLayout->addWidget(maxBox_1, 1, 3, 1, 1);

        pBox_1 = new QSpinBox(SwitchModeDlg);
        pBox_1->setObjectName(QString::fromUtf8("pBox_1"));
        sizePolicy.setHeightForWidth(pBox_1->sizePolicy().hasHeightForWidth());
        pBox_1->setSizePolicy(sizePolicy);
        pBox_1->setFont(font2);

        gridLayout->addWidget(pBox_1, 1, 4, 1, 1);

        iBox_1 = new QSpinBox(SwitchModeDlg);
        iBox_1->setObjectName(QString::fromUtf8("iBox_1"));
        sizePolicy.setHeightForWidth(iBox_1->sizePolicy().hasHeightForWidth());
        iBox_1->setSizePolicy(sizePolicy);
        iBox_1->setFont(font2);

        gridLayout->addWidget(iBox_1, 1, 5, 1, 1);

        dBox_1 = new QSpinBox(SwitchModeDlg);
        dBox_1->setObjectName(QString::fromUtf8("dBox_1"));
        sizePolicy.setHeightForWidth(dBox_1->sizePolicy().hasHeightForWidth());
        dBox_1->setSizePolicy(sizePolicy);
        dBox_1->setFont(font2);

        gridLayout->addWidget(dBox_1, 1, 6, 1, 1);

        label_3 = new QLabel(SwitchModeDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::WinPanel);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_mode2 = new QLineEdit(SwitchModeDlg);
        lineEdit_mode2->setObjectName(QString::fromUtf8("lineEdit_mode2"));
        sizePolicy.setHeightForWidth(lineEdit_mode2->sizePolicy().hasHeightForWidth());
        lineEdit_mode2->setSizePolicy(sizePolicy);
        lineEdit_mode2->setFont(font2);
        lineEdit_mode2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_mode2, 2, 1, 1, 1);

        minBox_2 = new QSpinBox(SwitchModeDlg);
        minBox_2->setObjectName(QString::fromUtf8("minBox_2"));
        sizePolicy.setHeightForWidth(minBox_2->sizePolicy().hasHeightForWidth());
        minBox_2->setSizePolicy(sizePolicy);
        minBox_2->setFont(font2);

        gridLayout->addWidget(minBox_2, 2, 2, 1, 1);

        maxBox_2 = new QSpinBox(SwitchModeDlg);
        maxBox_2->setObjectName(QString::fromUtf8("maxBox_2"));
        sizePolicy.setHeightForWidth(maxBox_2->sizePolicy().hasHeightForWidth());
        maxBox_2->setSizePolicy(sizePolicy);
        maxBox_2->setFont(font2);

        gridLayout->addWidget(maxBox_2, 2, 3, 1, 1);

        pBox_2 = new QSpinBox(SwitchModeDlg);
        pBox_2->setObjectName(QString::fromUtf8("pBox_2"));
        sizePolicy.setHeightForWidth(pBox_2->sizePolicy().hasHeightForWidth());
        pBox_2->setSizePolicy(sizePolicy);
        pBox_2->setFont(font2);

        gridLayout->addWidget(pBox_2, 2, 4, 1, 1);

        iBox_2 = new QSpinBox(SwitchModeDlg);
        iBox_2->setObjectName(QString::fromUtf8("iBox_2"));
        sizePolicy.setHeightForWidth(iBox_2->sizePolicy().hasHeightForWidth());
        iBox_2->setSizePolicy(sizePolicy);
        iBox_2->setFont(font2);

        gridLayout->addWidget(iBox_2, 2, 5, 1, 1);

        dBox_2 = new QSpinBox(SwitchModeDlg);
        dBox_2->setObjectName(QString::fromUtf8("dBox_2"));
        sizePolicy.setHeightForWidth(dBox_2->sizePolicy().hasHeightForWidth());
        dBox_2->setSizePolicy(sizePolicy);
        dBox_2->setFont(font2);

        gridLayout->addWidget(dBox_2, 2, 6, 1, 1);

        label_4 = new QLabel(SwitchModeDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_mode3 = new QLineEdit(SwitchModeDlg);
        lineEdit_mode3->setObjectName(QString::fromUtf8("lineEdit_mode3"));
        sizePolicy.setHeightForWidth(lineEdit_mode3->sizePolicy().hasHeightForWidth());
        lineEdit_mode3->setSizePolicy(sizePolicy);
        lineEdit_mode3->setFont(font2);
        lineEdit_mode3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_mode3, 3, 1, 1, 1);

        minBox_3 = new QSpinBox(SwitchModeDlg);
        minBox_3->setObjectName(QString::fromUtf8("minBox_3"));
        sizePolicy.setHeightForWidth(minBox_3->sizePolicy().hasHeightForWidth());
        minBox_3->setSizePolicy(sizePolicy);
        minBox_3->setFont(font2);

        gridLayout->addWidget(minBox_3, 3, 2, 1, 1);

        maxBox_3 = new QSpinBox(SwitchModeDlg);
        maxBox_3->setObjectName(QString::fromUtf8("maxBox_3"));
        sizePolicy.setHeightForWidth(maxBox_3->sizePolicy().hasHeightForWidth());
        maxBox_3->setSizePolicy(sizePolicy);
        maxBox_3->setFont(font2);

        gridLayout->addWidget(maxBox_3, 3, 3, 1, 1);

        pBox_3 = new QSpinBox(SwitchModeDlg);
        pBox_3->setObjectName(QString::fromUtf8("pBox_3"));
        sizePolicy.setHeightForWidth(pBox_3->sizePolicy().hasHeightForWidth());
        pBox_3->setSizePolicy(sizePolicy);
        pBox_3->setFont(font2);

        gridLayout->addWidget(pBox_3, 3, 4, 1, 1);

        iBox_3 = new QSpinBox(SwitchModeDlg);
        iBox_3->setObjectName(QString::fromUtf8("iBox_3"));
        sizePolicy.setHeightForWidth(iBox_3->sizePolicy().hasHeightForWidth());
        iBox_3->setSizePolicy(sizePolicy);
        iBox_3->setFont(font2);

        gridLayout->addWidget(iBox_3, 3, 5, 1, 1);

        dBox_3 = new QSpinBox(SwitchModeDlg);
        dBox_3->setObjectName(QString::fromUtf8("dBox_3"));
        sizePolicy.setHeightForWidth(dBox_3->sizePolicy().hasHeightForWidth());
        dBox_3->setSizePolicy(sizePolicy);
        dBox_3->setFont(font2);

        gridLayout->addWidget(dBox_3, 3, 6, 1, 1);

        label_5 = new QLabel(SwitchModeDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::WinPanel);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_mode4 = new QLineEdit(SwitchModeDlg);
        lineEdit_mode4->setObjectName(QString::fromUtf8("lineEdit_mode4"));
        sizePolicy.setHeightForWidth(lineEdit_mode4->sizePolicy().hasHeightForWidth());
        lineEdit_mode4->setSizePolicy(sizePolicy);
        lineEdit_mode4->setFont(font2);
        lineEdit_mode4->setReadOnly(true);

        gridLayout->addWidget(lineEdit_mode4, 4, 1, 1, 1);

        minBox_4 = new QSpinBox(SwitchModeDlg);
        minBox_4->setObjectName(QString::fromUtf8("minBox_4"));
        sizePolicy.setHeightForWidth(minBox_4->sizePolicy().hasHeightForWidth());
        minBox_4->setSizePolicy(sizePolicy);
        minBox_4->setFont(font2);

        gridLayout->addWidget(minBox_4, 4, 2, 1, 1);

        maxBox_4 = new QSpinBox(SwitchModeDlg);
        maxBox_4->setObjectName(QString::fromUtf8("maxBox_4"));
        sizePolicy.setHeightForWidth(maxBox_4->sizePolicy().hasHeightForWidth());
        maxBox_4->setSizePolicy(sizePolicy);
        maxBox_4->setFont(font2);

        gridLayout->addWidget(maxBox_4, 4, 3, 1, 1);

        pBox_4 = new QSpinBox(SwitchModeDlg);
        pBox_4->setObjectName(QString::fromUtf8("pBox_4"));
        sizePolicy.setHeightForWidth(pBox_4->sizePolicy().hasHeightForWidth());
        pBox_4->setSizePolicy(sizePolicy);
        pBox_4->setFont(font2);

        gridLayout->addWidget(pBox_4, 4, 4, 1, 1);

        iBox_4 = new QSpinBox(SwitchModeDlg);
        iBox_4->setObjectName(QString::fromUtf8("iBox_4"));
        sizePolicy.setHeightForWidth(iBox_4->sizePolicy().hasHeightForWidth());
        iBox_4->setSizePolicy(sizePolicy);
        iBox_4->setFont(font2);

        gridLayout->addWidget(iBox_4, 4, 5, 1, 1);

        dBox_4 = new QSpinBox(SwitchModeDlg);
        dBox_4->setObjectName(QString::fromUtf8("dBox_4"));
        sizePolicy.setHeightForWidth(dBox_4->sizePolicy().hasHeightForWidth());
        dBox_4->setSizePolicy(sizePolicy);
        dBox_4->setFont(font2);

        gridLayout->addWidget(dBox_4, 4, 6, 1, 1);

        label_6 = new QLabel(SwitchModeDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::WinPanel);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_mode5 = new QLineEdit(SwitchModeDlg);
        lineEdit_mode5->setObjectName(QString::fromUtf8("lineEdit_mode5"));
        sizePolicy.setHeightForWidth(lineEdit_mode5->sizePolicy().hasHeightForWidth());
        lineEdit_mode5->setSizePolicy(sizePolicy);
        lineEdit_mode5->setFont(font2);
        lineEdit_mode5->setReadOnly(true);

        gridLayout->addWidget(lineEdit_mode5, 5, 1, 1, 1);

        minBox_5 = new QSpinBox(SwitchModeDlg);
        minBox_5->setObjectName(QString::fromUtf8("minBox_5"));
        sizePolicy.setHeightForWidth(minBox_5->sizePolicy().hasHeightForWidth());
        minBox_5->setSizePolicy(sizePolicy);
        minBox_5->setFont(font2);

        gridLayout->addWidget(minBox_5, 5, 2, 1, 1);

        maxBox_5 = new QSpinBox(SwitchModeDlg);
        maxBox_5->setObjectName(QString::fromUtf8("maxBox_5"));
        sizePolicy.setHeightForWidth(maxBox_5->sizePolicy().hasHeightForWidth());
        maxBox_5->setSizePolicy(sizePolicy);
        maxBox_5->setFont(font2);

        gridLayout->addWidget(maxBox_5, 5, 3, 1, 1);

        pBox_5 = new QSpinBox(SwitchModeDlg);
        pBox_5->setObjectName(QString::fromUtf8("pBox_5"));
        sizePolicy.setHeightForWidth(pBox_5->sizePolicy().hasHeightForWidth());
        pBox_5->setSizePolicy(sizePolicy);
        pBox_5->setFont(font2);

        gridLayout->addWidget(pBox_5, 5, 4, 1, 1);

        iBox_5 = new QSpinBox(SwitchModeDlg);
        iBox_5->setObjectName(QString::fromUtf8("iBox_5"));
        sizePolicy.setHeightForWidth(iBox_5->sizePolicy().hasHeightForWidth());
        iBox_5->setSizePolicy(sizePolicy);
        iBox_5->setFont(font2);

        gridLayout->addWidget(iBox_5, 5, 5, 1, 1);

        dBox_5 = new QSpinBox(SwitchModeDlg);
        dBox_5->setObjectName(QString::fromUtf8("dBox_5"));
        sizePolicy.setHeightForWidth(dBox_5->sizePolicy().hasHeightForWidth());
        dBox_5->setSizePolicy(sizePolicy);
        dBox_5->setFont(font2);

        gridLayout->addWidget(dBox_5, 5, 6, 1, 1);


        retranslateUi(SwitchModeDlg);

        QMetaObject::connectSlotsByName(SwitchModeDlg);
    } // setupUi

    void retranslateUi(QDialog *SwitchModeDlg)
    {
        SwitchModeDlg->setWindowTitle(QApplication::translate("SwitchModeDlg", "Switch Mode", nullptr));
        label_2->setText(QApplication::translate("SwitchModeDlg", "OPERATING MODE", nullptr));
        label_7->setText(QApplication::translate("SwitchModeDlg", "MIN POSITION", nullptr));
        label_8->setText(QApplication::translate("SwitchModeDlg", "MAX POSITION", nullptr));
        label_9->setText(QApplication::translate("SwitchModeDlg", "P_GAIN", nullptr));
        label_10->setText(QApplication::translate("SwitchModeDlg", "I_GAIN", nullptr));
        label_11->setText(QApplication::translate("SwitchModeDlg", "D_GAIN", nullptr));
        label->setText(QApplication::translate("SwitchModeDlg", "JOINT1", nullptr));
        label_3->setText(QApplication::translate("SwitchModeDlg", "JOINT2", nullptr));
        label_4->setText(QApplication::translate("SwitchModeDlg", "JOINT3", nullptr));
        label_5->setText(QApplication::translate("SwitchModeDlg", "JOINT4", nullptr));
        label_6->setText(QApplication::translate("SwitchModeDlg", "JOINT5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SwitchModeDlg: public Ui_SwitchModeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHMODEDLG_H
