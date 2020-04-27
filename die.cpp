#include "die.h"
#include <time.h>

Die :: Die(int initialNumberOfSides, int initialStartingValue, int initialIncrement, std::string initialColor, std::string initialID) {
    srand((unsigned int)time(0));
    numberOfSides = initialNumberOfSides;
    startingValue = initialStartingValue;
    setIncrement(initialIncrement);
    color = initialColor;
    ID = initialID;
    value = 0;

}
std::string Die::stringRep() {
    char buffer[100];
    int numberOfCharacters = 0;

    const char *format = "Die named %s has %i sides, starts at %i increments by %i and has a current value of %i";
    numberOfCharacters = std::snprintf(buffer, 100, format, ID.c_str(), numberOfSides, startingValue, increment, value);
    if (numberOfCharacters > 0 && numberOfCharacters < 100 ) {
        std::string returnString(buffer, numberOfCharacters);
        return returnString;
    }
    else
        return "";
}
int Die::roll() {
    value = ((rand() % numberOfSides) * increment + startingValue);
    return value;
}

int Die::getValue() {
    return value;
}
void Die::setNumberOfSides(int newNumberOfSides) {
    numberOfSides = newNumberOfSides;
}
int Die::getNumberOfSides() {
    return numberOfSides;
}
void Die::setStartingValue(int newStartingValue) {
    startingValue = newStartingValue;
}
int Die::getStartingValue() {
    return startingValue;
}
void Die::setIncrement(int newIncrement) {
    if (newIncrement > 0 && newIncrement == 1)
        increment = newIncrement;
    else
        increment = newIncrement;
    startingValue = newIncrement;
}
int Die::getIncrement() {
    return increment;
}
void Die::setColor(std::string newColor) {
    color = newColor;
}
std::string Die::getColor() {
    return color;
}
void Die::setID(std::string newID) {
    ID = newID;
}
std::string Die::getID() {
    return ID;
}

