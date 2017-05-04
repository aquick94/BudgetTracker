#include "customBudget.h"

void customMenu(budgetArray &budget)
{
    char input = ' ';
    char input2 = ' ';

    string name = " ";
    double value = 0.0;

    input == '10';
    do
    {
        cout << endl << "Options:" << endl
            << "1. Insert a field." << endl
            << "2. Update a field's balance." << endl
            << "3. Add to or subtract from a field's balance." << endl
            << "4. Remove a field." << endl
            << "5. Display one field and balance." << endl
            << "6. Display all fields and values." << endl
            << "7. Save data to file." << endl
            << "8. Load data from a file." << endl
            << "9. Quit." << endl
            << "Enter your choice: ";
        cin >> input;
        cin.ignore();

        switch (input)
        {
        case '1':
            cout << endl << "Enter the name of the field to add: ";
            cin >> name;
            budget.addField(name);
            break;
        case '2':
            cout << endl << "Enter the name of the field which balance to update: ";
            cin >> name;
            cout << "Enter the new value: ";
            cin >> value;
            budget.updateTotal(name, value);
            break;
        case '3':
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
        case '4':
            cout << endl << "Enter the name of the field to remove: ";
            cin >> name;
            budget.removeField(name);
            break;
        case '5':
            cout << endl << "Enter the name of the field to display: ";
            cin >> name;
            budget.displayOne(name);
            break;
        case '6':
            budget.displayAll();
            break;
        case '7':
            budget.saveData();
            break;
        case '8':
            budget.loadData();
            break;
        case '9':
            cout << "Do you want to save the data to a file? [y/n]: ";
            cin >> input2;
            if (input2 == 'y' || input2 == 'Y')
                budget.saveData();
            cout << "Goodbye." << endl;
            break;
        }
    }while (input != '9');
    return;
}
