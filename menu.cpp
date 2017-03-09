#include "customBudget.h"

void menu(budgetArray &budget)
{
    char input = ' ';
    char input2 = ' ';

    string name = " ";
    double value = 0.0;

    cout << "1. Predefined Budget Options (Coming Soon)" << endl;
    cout << "2. Custom Budget Options" << endl;
    cout << "Choose an option: ";
    cin >> input;
    cin.ignore();
    if (input == '1')
    {
        cout << "Coming Soon..." << endl << "Here is the custom option" << endl;
    }
    //else
    //{
        input == '9';
        do
        {
            cout << endl << "Options:" << endl
                << "1. Insert a field." << endl
                << "2. Update a field's balance." << endl
                << "3. Remove a field." << endl
                << "4. Display one field and balance." << endl
                << "5. Display all fields and values." << endl
                << "6. Save data to file." << endl
                << "7. Load data from a file." << endl
                << "8. Quit." << endl
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
                cout << endl << "Enter the name of the field to remove: ";
                cin >> name;
                budget.removeField(name);
                break;
            case '4':
                cout << endl << "Enter the name of the field to display: ";
                cin >> name;
                budget.displayOne(name);
                break;
            case '5':
                budget.displayAll();
                break;
            case '6':
                budget.saveData();
                break;
            case '7':
                budget.loadData();
                break;
            case '8':
                cout << "Do you want to save the data to a file? [y/n]: ";
                cin >> input2;
                if (input2 == 'y' || input2 == 'Y')
                    budget.saveData();
                cout << "Goodbye." << endl;
                break;
            }
        }while (input != '8');
    //}
    return;
}
