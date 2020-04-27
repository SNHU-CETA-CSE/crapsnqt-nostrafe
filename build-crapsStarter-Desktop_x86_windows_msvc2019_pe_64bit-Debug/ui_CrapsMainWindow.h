/********************************************************************************
** Form generated from reading UI file 'CrapsMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRAPSMAINWINDOW_H
#define UI_CRAPSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrapsMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpinBox *UserBetBox;
    QLabel *currentBankValueUI;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_18;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *die1UI;
    QSpacerItem *horizontalSpacer_3;
    QLabel *die2UI;
    QSpacerItem *verticalSpacer_10;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *rollButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_11;
    QGridLayout *gridLayout_6;
    QLabel *WinText;
    QLabel *CounterWins;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QGridLayout *gridLayout_7;
    QLabel *LossesLabel;
    QSpacerItem *verticalSpacer_9;
    QLabel *LossesCounter;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_15;
    QGridLayout *gridLayout_4;
    QLabel *BankChecker;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_14;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer;
    QLabel *BetMessage;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_19;
    QMenuBar *menubar;
    QMenu *menuCraps;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CrapsMainWindow)
    {
        if (CrapsMainWindow->objectName().isEmpty())
            CrapsMainWindow->setObjectName(QString::fromUtf8("CrapsMainWindow"));
        CrapsMainWindow->resize(897, 740);
        centralwidget = new QWidget(CrapsMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_10 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_10, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        UserBetBox = new QSpinBox(centralwidget);
        UserBetBox->setObjectName(QString::fromUtf8("UserBetBox"));
        QPalette palette;
        QBrush brush(QColor(0, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        UserBetBox->setPalette(palette);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        UserBetBox->setFont(font1);
        UserBetBox->setMinimum(100);
        UserBetBox->setMaximum(1000);
        UserBetBox->setSingleStep(100);
        UserBetBox->setValue(100);

        gridLayout_2->addWidget(UserBetBox, 0, 4, 1, 1);

        currentBankValueUI = new QLabel(centralwidget);
        currentBankValueUI->setObjectName(QString::fromUtf8("currentBankValueUI"));
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        currentBankValueUI->setFont(font2);

        gridLayout_2->addWidget(currentBankValueUI, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 0, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_11, 0, 5, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 1, 4, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(182, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_18, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        die1UI = new QLabel(centralwidget);
        die1UI->setObjectName(QString::fromUtf8("die1UI"));
        die1UI->setPixmap(QPixmap(QString::fromUtf8(":/dieImages/6")));

        gridLayout->addWidget(die1UI, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        die2UI = new QLabel(centralwidget);
        die2UI->setObjectName(QString::fromUtf8("die2UI"));
        die2UI->setPixmap(QPixmap(QString::fromUtf8(":/dieImages/5")));

        gridLayout->addWidget(die2UI, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout, 2, 1, 2, 6);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_10, 4, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        rollButton = new QPushButton(centralwidget);
        rollButton->setObjectName(QString::fromUtf8("rollButton"));
        QPalette palette1;
        QBrush brush1(QColor(5, 16, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        rollButton->setPalette(palette1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe Print"));
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        rollButton->setFont(font3);
        rollButton->setIconSize(QSize(16, 16));
        rollButton->setCheckable(false);
        rollButton->setAutoDefault(false);
        rollButton->setFlat(false);

        gridLayout_3->addWidget(rollButton, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 4, 3, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_11, 4, 5, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        WinText = new QLabel(centralwidget);
        WinText->setObjectName(QString::fromUtf8("WinText"));
        WinText->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(WinText, 0, 0, 1, 1);

        CounterWins = new QLabel(centralwidget);
        CounterWins->setObjectName(QString::fromUtf8("CounterWins"));
        CounterWins->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(CounterWins, 2, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 5, 2, 2, 1);

        verticalSpacer_7 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_7, 5, 3, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        LossesLabel = new QLabel(centralwidget);
        LossesLabel->setObjectName(QString::fromUtf8("LossesLabel"));
        LossesLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(LossesLabel, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_9, 1, 0, 1, 1);

        LossesCounter = new QLabel(centralwidget);
        LossesCounter->setObjectName(QString::fromUtf8("LossesCounter"));
        LossesCounter->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(LossesCounter, 2, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 5, 5, 2, 1);

        horizontalSpacer_16 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_16, 6, 0, 1, 2);

        horizontalSpacer_17 = new QSpacerItem(67, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_17, 6, 6, 1, 2);

        horizontalSpacer_15 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_15, 7, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        BankChecker = new QLabel(centralwidget);
        BankChecker->setObjectName(QString::fromUtf8("BankChecker"));

        gridLayout_4->addWidget(BankChecker, 1, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 1, 4, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 7, 3, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_14, 7, 4, 1, 4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 0, 1, 1, 1);

        BetMessage = new QLabel(centralwidget);
        BetMessage->setObjectName(QString::fromUtf8("BetMessage"));

        gridLayout_5->addWidget(BetMessage, 1, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 2, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_12, 0, 2, 2, 1);


        gridLayout_8->addLayout(gridLayout_5, 8, 3, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_19, 2, 7, 1, 1);

        CrapsMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CrapsMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 897, 20));
        menuCraps = new QMenu(menubar);
        menuCraps->setObjectName(QString::fromUtf8("menuCraps"));
        CrapsMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CrapsMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CrapsMainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(rollButton, UserBetBox);

        menubar->addAction(menuCraps->menuAction());

        retranslateUi(CrapsMainWindow);

        rollButton->setDefault(false);


        QMetaObject::connectSlotsByName(CrapsMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CrapsMainWindow)
    {
        CrapsMainWindow->setWindowTitle(QCoreApplication::translate("CrapsMainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CrapsMainWindow", "Bank:", nullptr));
        currentBankValueUI->setText(QCoreApplication::translate("CrapsMainWindow", "0", nullptr));
        die1UI->setText(QString());
        die2UI->setText(QString());
        rollButton->setText(QCoreApplication::translate("CrapsMainWindow", "ROLL!", nullptr));
        WinText->setText(QCoreApplication::translate("CrapsMainWindow", "Wins", nullptr));
        CounterWins->setText(QCoreApplication::translate("CrapsMainWindow", "0", nullptr));
        LossesLabel->setText(QCoreApplication::translate("CrapsMainWindow", "losses", nullptr));
        LossesCounter->setText(QCoreApplication::translate("CrapsMainWindow", "0", nullptr));
        BankChecker->setText(QString());
        BetMessage->setText(QString());
        menuCraps->setTitle(QCoreApplication::translate("CrapsMainWindow", "Craps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrapsMainWindow: public Ui_CrapsMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAPSMAINWINDOW_H
