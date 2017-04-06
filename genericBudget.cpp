#include "genericBudget.h"

using namespace std;

genericBudget ()
{
    currentFunds = 0.0;
    currentSavings = 0.0;
    currentDebt = 0.0;
    income = 0.0;
    monthlySavings = 0.0;
    rent = 0.0;
    utilities = 0.0;
    transpotation = 0.0;
    food = 0.0;
    insurance = 0.0;
    entertainment = 0.0;
    personal = 0.0;
    misc = 0.0;
}

void genericBudget::setCurrentFunds(double value)
{
    currentFunds = value;
}

void genericBudget::setCurrentSavings(double value);
{
    currentSavings = value;
}

void genericBudget::setCurrentDebt(double value);
{
    currentDebt = value;
}

void genericBudget::setIncome(double value);
{
    income = value;
}

void genericBudget::setMonthlySavings(double value);
{
    monthlySavings = value;
}

void genericBudget::setRent(double value);
{
    rent = value;
}

void genericBudget::setUtilities(double value);
{
    utilities = value;
}

void genericBudget::setTransportation(double value);
{
    transportation = value;
}

void genericBudget::setFood(double value);
{
    food = value;
}

void genericBudget::setInsurance(double value);
{
    insurance = value;
}

void genericBudget::setEntertainment(double value);
{
    entertainment = value;
}

void genericBudget::setPersonal(double value);
{
    personal = value;
}

void genericBudget::setMisc(double value);
{
    misc = value;
}

void genericBudget::addTo();
{
    //Needs function
}
void genericBudget::subFrom();
{
    //Needs function
}
