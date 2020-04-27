//
// Created by Arana Fireheart on 2/2/20.
//

#ifndef CRAPSSTARTER_CRAPS_H
#define CRAPSSTARTER_CRAPS_H

#include "ui_CrapsMainWindow.h"
#include "die.h"
#include <QMainWindow>

class CrapsMainWindow : public QMainWindow, private Ui::CrapsMainWindow {
Q_OBJECT

public:
    CrapsMainWindow(QMainWindow *parent = nullptr);
    void printStringRep();
    void updateUI();
    void checkBankValue();
    void rollDice();
    void CheckWin();
    void settleBet(int winningNumber);

private:
    Die die1, die2;
    std:: string message;
    std:: string bMessage;
    bool fRoll = true;
    int winsCount = 0;
    double currentBankValue;
    int Value;
    int playersTurn = 1;
    int rolledNum;
    int secondRollNum;
    int wCount;
    int lCount;


public Q_SLOTS:
    void rollButtonClickedHandler();
};
//#include "moc_craps.cpp"
#endif //CRAPSSTARTER_CRAPS_H

