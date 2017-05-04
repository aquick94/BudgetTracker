#include "genericBudget.h"

void genericMenu(genericBudget &budget)
{
char input = '9';
char input2 = ' ';

do
{
    cout << endl << "Options:" << endl
        << "1. Update a field's balance." << endl
        << "2. Add to or subtract from a field's balance." << endl
        << "3. Display all fields and values." << endl
        << "4. Save data to file." << endl
        << "5. Load data from a file." << endl
        << "6. Quit." << endl
        << "Enter your choice: ";
    cin >> input;
    cin.ignore();

    switch (input)
    {
    case '1':
        budget.updateTotal();
        break;
    case '2':
        cout << endl << "Are you adding to a balance or subtracting?" << endl
            << "1. Adding | 2. Subtracting  [1/2]:";
            cin >> input2;
        if (input2 == '1')
            budget.addTo();
        else if (input2 == '2')
            budget.subFrom();
        else
        {
            while (input2 != '1' && input2 != '2')
            {
                cout << "Please enter a valid choice. [1/2]?:";
                cin >> input2;
                if (input2 == '1')
                    budget.addTo();
                else if (input2 == '2')
                    budget.subFrom();
            }
        }
        break;
    case '3':
        budget.displayAll();
        break;
    case '4':
        budget.saveData();
        break;
    case '5':
        budget.loadData();
        break;
    case '6':
        cout << "Do you want to save the data to a file? [y/n]: ";
        cin >> input2;
        if (input2 == 'y' || input2 == 'Y')
            budget.saveData();
        cout << "Goodbye." << endl;
        break;
    }
}while (input != '6');
}
