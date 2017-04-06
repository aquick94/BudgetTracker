#include <iostream>
#include "customBudget.h"
#include "customBudget.cpp"
#include "menu.cpp"

using namespace std;

int main()
{
    // Not ready for implementation
    /*char input = ' ';

    cout << "1. Predefined Budget Options (Coming Soon)" << endl;
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

        menu(budget);
    }
    else
    {
        while (input != '1' && input != '2')
        {
            cout << "Choose a valid option: ";
            cin >> input;
            cin.ignore()

            if (input == '1')
            {
                genericBudget budget;

                genericMenu(budget);
            }
            else if (input == '2')
            {
                budgetArray budget;

                menu(budget);
            }
        }
    } */

    budgetArray budget;

    menu(budget);

    return 0;
}
