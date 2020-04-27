#include <iostream>
#include <stdio.h>
//#include <QApplication>
//#include <QWidget>
//#include <QGridLayout>
//#include <QPushButton>
//#include <QLabel>
//#include <QPixmap>

#include "die.h"
#include "craps.h"
#include "ui_CrapsMainWindow.h"


CrapsMainWindow :: CrapsMainWindow(QMainWindow *parent) {
    // Build a GUI window with two dice.
    wCount =0;
    lCount = 0;
    currentBankValue = 10000;
    setupUi(this);

    Die die1, die2;


    QObject::connect(rollButton, SIGNAL(clicked()), this, SLOT(rollButtonClickedHandler()));
    QObject::connect(UserBetBox, SIGNAL(clicked()), this, SLOT(rollButtonClickedHandler()));
}
void CrapsMainWindow::printStringRep() {
    // String representation for Craps.
    char buffer[25];
    int length =  sprintf(buffer, "Die1: %i\nDie2: %i\n", die1.getValue(), die2.getValue());
    printf("%s", buffer);
}
void CrapsMainWindow::updateUI() {
//    printf("Inside updateUI()\n");
    std::string die1ImageName = ":/dieImages/" + std::to_string(die1.getValue());
    std::string die2ImageName = ":/dieImages/" + std::to_string(die2.getValue());
    die1UI->setPixmap(QPixmap(QString::fromStdString(die1ImageName)));
    die2UI->setPixmap(QPixmap(QString::fromStdString(die2ImageName)));
    BankChecker->setText(QString::fromStdString(message));
    BetMessage->setText(QString::fromStdString(bMessage));
    wCounter ->setText(QString::fromStdString(std::to_string(wCount)));
    lCounter ->setText(QString::fromStdString(std::to_string(lCount)));
    currentBankValueUI->setText(QString::fromStdString(std::to_string(static_cast<int>(currentBankValue))));
}

// Player asked for another roll of the dice.
void CrapsMainWindow::rollButtonClickedHandler() {
//void Craps::rollButtonClickedHandler() {
    printf("Roll button clicked\n");
    if(playersTurn == 1)
    {
     bMessage = "";
     updateUI();
    checkBankValue();
    }
    else if(playersTurn == 2)
    {
        bMessage = "";
        updateUI();
        rollDice();
        CheckWin();
    }

}




void CrapsMainWindow::checkBankValue()
{ bool legalBet;
    do{
         if(currentBankValue-UserBetBox->value() < 0)
         {
          message = "Not enough money!";
          legalBet = false;
         }
         else
         {
          legalBet = true;
          message = ("You bet $" + std::to_string(UserBetBox->value()));
          currentBankValue -= UserBetBox->value();
          rollDice();
          CheckWin();
         }
     }while(false);
 }
void CrapsMainWindow::rollDice()
{

    die1.roll();
    die2.roll();
    printStringRep();
    updateUI();

}
void CrapsMainWindow::CheckWin()
{
    if(playersTurn == 1)
    {
     rolledNum = die1.getValue() + die2.getValue();
     if( rolledNum== 2 || rolledNum == 3 || rolledNum == 12)
            {
             lCount++;
             message = "You rolled a " + std::to_string(rolledNum) + ", so you lost!";
             updateUI();
           }
            else if(rolledNum == 11 || rolledNum == 7)
           {
            wCount++;
            message =  "You rolled a " + std:: to_string(rolledNum) + ", so you won!";
            settleBet(rolledNum);
            updateUI();
            }
    else if(rolledNum == 4 || rolledNum == 5 || rolledNum == 6 || rolledNum == 8 || rolledNum == 9 || rolledNum == 10)
      {
       message = "You rolled a " + std::to_string(rolledNum) + ", so you get another go!";
       playersTurn++;
       updateUI();
     }
    }
      else if(playersTurn == 2)
        {
         int secondRollValue =  die1.getValue() + die2.getValue();

                  if(rolledNum == secondRollValue)
                   {
                     message = "You rolled a " + std::to_string(secondRollValue) + ". Since they're the same you win!";
                     wCount++;
                     playersTurn = 1;
                     settleBet(secondRollValue);
                    }
                   else
                 {
                  message =  "You rolled a " + std::to_string(secondRollValue) + ". Since they're different you lose!";
                  lCount++;
                  playersTurn = 1;
                  updateUI();
                  }


        }
}

void CrapsMainWindow::settleBet(int winningNumber)
{
    switch (rolledNum) {
    case 7:
    case 11:
        bMessage = "You got your money back!";
        currentBankValue += UserBetBox->value();
        updateUI();
        break;
    case 4:
        bMessage = "1.5x payout!";
        currentBankValue += (UserBetBox->value() * 2);
        updateUI();
        break;
    case 5:
        bMessage = "1.5x payout!";
        currentBankValue += (UserBetBox->value() + (UserBetBox->value()/2));
        updateUI();
        break;
    case 6:
        bMessage = "1.2x payout!" ;
        currentBankValue += (static_cast<float>((UserBetBox->value())) * 1.2);
        updateUI();
        break;
    case 8:
        bMessage =  "1.2x payout!" ;
        currentBankValue += (static_cast<float>((UserBetBox->value())) * 1.2);
        updateUI();
        break;
    case 9:
        bMessage = "1.5x payout!";
        currentBankValue += (static_cast<float>((UserBetBox->value())) * 1.5);
        updateUI();
        break;
    case 10:
        bMessage = "2x payout!" ;
        currentBankValue += (static_cast<float>((UserBetBox->value())) * 2.0);
        updateUI();
        break;
    }

}
