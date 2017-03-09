#include <iostream>
#include "customBudget.h"
#include "customBudget.cpp"
#include "menu.cpp"

using namespace std;

struct genericBudget // Need to put in separate file, currently doing nothing
{
    double currentFunds;
    double currentSavings;
    double currentDebt;

    double income;
    double monthlySavings;

    double rent;
    double utilities;
    double transpotation;
    double food;
    double insurance;
    double entertainment;
    double personal;
    double misc;
};


int main()
{
    budgetArray budget;

    menu(budget);

    return 0;
}
