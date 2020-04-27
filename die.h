#ifndef CRAPSSTARTER_DIE_H
#define CRAPSSTARTER_DIE_H
#include <string>

class Die {
protected:
    int numberOfSides;
    int startingValue;
    int increment;
    std::string color;
    std::string ID;
    int value;
public:
    Die(int openingNumberOfSides = 6, int openingStartingValue = 1, int openingIncrement = 1,
        std::string openingColor = "White", std::string openingName = "Bones") ;
    std::string stringRep();
    int roll();
    void setValue(int newValue);
    int getValue();
    void setNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setStartingValue(int newStartingValue);
    int getStartingValue();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setColor(std::string newColor);
    std::string getColor();
    void setID(std::string newName);
    std::string getID();
};

struct BadDieValueException : public std::exception {
    const char * what() const throw() {
        return "Can't set die value; value out of range.";
    }
};

#endif //CRAPSSTARTER_DIE_H
