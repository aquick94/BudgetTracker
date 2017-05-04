#include <iostream>
#include "customBudget.h"
#include "customBudget.cpp"
#include "genericBudget.h"
#include "genericBudget.cpp"
#include "genericMenu.cpp"
#include "customMenu.cpp"

using namespace std;

int main()
{
    char input = ' ';

    cout << "Budget Tracker v1.0" << endl << "----------------------------" << endl;

    cout << "1. Predefined Budget Options" << endl;
    cout << "2. Custom Budget Options" << endl;
    cout << "Choose an option: ";
    cin >> input;
    cin.ignore();
    if (input == '1')
    {
        genericBudget budget;

        genericMenu(budget);
    }
    else if (input == '2')
    {
        budgetArray budget;

        customMenu(budget);
    }
    else
    {
        while (input != '1' && input != '2')
        {
            cout << "Choose a valid option: ";
            cin >> input;
            cin.ignore();

            if (input == '1')
            {
                genericBudget budget;

                genericMenu(budget);
            }
            else if (input == '2')
            {
                budgetArray budget;

                customMenu(budget);
            }
        }
    }
    return 0;
}
