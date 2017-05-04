#include "genericBudget.h"

using namespace std;

genericBudget::genericBudget()
{
    currentFunds = 0.0;
    currentSavings = 0.0;
    creditAccounts = 0.0;
    rent = 0.0;
    utilities = 0.0;
    insurance = 0.0;
    personal = 0.0;
    misc = 0.0;
}

void genericBudget::setCurrentFunds(double value)
{
    currentFunds = value;
}

void genericBudget::setCurrentSavings(double value)
{
    currentSavings = value;
}

void genericBudget::setCreditAccounts(double value)
{
    creditAccounts = value;
}

void genericBudget::setRent(double value)
{
    rent = value;
}

void genericBudget::setUtilities(double value)
{
    utilities = value;
}

void genericBudget::setInsurance(double value)
{
    insurance = value;
}

void genericBudget::setPersonal(double value)
{
    personal = value;
}

void genericBudget::setMisc(double value)
{
    misc = value;
}

double genericBudget::getCurrentFunds()
{
    return currentFunds;
}

double genericBudget::getCurrentSavings()
{
    return currentSavings;
}

double genericBudget::getCreditAccounts()
{
    return creditAccounts;
}

double genericBudget::getRent()
{
    return rent;
}

double genericBudget::getUtilities()
{
    return utilities;
}

double genericBudget::getInsurance()
{
    return insurance;
}

double genericBudget::getPersonal()
{
    return personal;
}

double genericBudget::getMisc()
{
    return misc;
}

void genericBudget::updateTotal()
{
    char choice = ' ';
    double update = 0.0;
    cout << endl << fixed << setprecision(2) << "1. Current Funds: $" << currentFunds << " | 2. Current Savings: $" << currentSavings
        << " | 3. Credit Accounts: $" << creditAccounts << " | 4. Rent: $" << rent << endl << "5. Utilities: $" << utilities
        << " | 6. Insurance: $" << insurance << " | 7. Personal: $" << personal << " | 8. Miscellaneous: $" << misc << endl << endl;
    cout << "Enter the number of the field you would like to update: ";
    cin >> choice;
    cin.ignore();

    switch(choice)
    {
    case '1':
        cout << "Enter new total for Current Funds: $";
        cin >> update;
        currentFunds = update;
        break;
    case '2':
        cout << "Enter new total for Current Savings: ";
        cin >> update;
        currentSavings = update;
        break;
    case '3':
        cout << "Enter new total for Credit Accounts: ";
        cin >> update;
        creditAccounts = update;
        break;
    case '4':
        cout << "Enter new total for Rent: ";
        cin >> update;
        rent = update;
        break;
    case '5':
        cout << "Enter new total for Utilities: ";
        cin >> update;
        utilities = update;
        break;
    case '6':
        cout << "Enter new total for Insurance: ";
        cin >> update;
        insurance = update;
        break;
    case '7':
        cout << "Enter new total for Personal: ";
        cin >> update;
        personal = update;
        break;
    case '8':
        cout << "Enter new total for Miscellaneous: ";
        cin >> update;
        misc = update;
        break;
    default:
        cout << "That was an invalid input." << endl;
        break;
    }
    return;
}

void genericBudget::addTo()
{
    char choice = ' ';
    double update = 0.0;
    cout << endl << fixed << setprecision(2) << "1. Current Funds: $" << currentFunds << " | 2. Current Savings: $" << currentSavings
        << " | 3. Credit Accounts: $" << creditAccounts << " | 4. Rent: $" << rent << endl << "5. Utilities: $" << utilities
        << " | 6. Insurance: $" << insurance << " | 7. Personal: $" << personal << " | 8. Miscellaneous: $" << misc << endl << endl;
    cout << "Enter the number of the field you would like to add to: ";
    cin >> choice;
    cin.ignore();

    switch(choice)
    {
    case '1':
        cout << "How much would you like to add to Current Funds: $";
        cin >> update;
        currentFunds += update;
        break;
    case '2':
        cout << "How much would you like to add to Current Savings: ";
        cin >> update;
        currentSavings += update;
        break;
    case '3':
        cout << "How much would you like to add to Credit Accounts: ";
        cin >> update;
        creditAccounts += update;
        break;
    case '4':
        cout << "How much would you like to add to Rent: ";
        cin >> update;
        rent += update;
        break;
    case '5':
        cout << "How much would you like to add to Utilities: ";
        cin >> update;
        utilities += update;
        break;
    case '6':
        cout << "How much would you like to add to Insurance: ";
        cin >> update;
        insurance += update;
        break;
    case '7':
        cout << "How much would you like to add to Personal: ";
        cin >> update;
        personal += update;
        break;
    case '8':
        cout << "How much would you like to add to Miscellaneous: ";
        cin >> update;
        misc += update;
        break;
    default:
        cout << "That was an invalid input." << endl;
        break;
    }
    return;
}
void genericBudget::subFrom()
{
    char choice = ' ';
    double update = 0.0;
    cout << endl << fixed << setprecision(2) << "1. Current Funds: $" << currentFunds << " | 2. Current Savings: $" << currentSavings
        << " | 3. Credit Accounts: $" << creditAccounts << " | 4. Rent: $" << rent << endl << "5. Utilities: $" << utilities
        << " | 6. Insurance: $" << insurance << " | 7. Personal: $" << personal << " | 8. Miscellaneous: $" << misc << endl << endl;
    cout << "Enter the number of the field you would like to update: ";
    cin >> choice;
    cin.ignore();

    switch(choice)
    {
    case '1':
        cout << "How much would you like to subtract from Current Funds: $";
        cin >> update;
        currentFunds += -update;
        break;
    case '2':
        cout << "How much would you like to subtract from Current Savings: ";
        cin >> update;
        currentSavings += -update;
        break;
    case '3':
        cout << "How much would you like to subtract from Credit Accounts: ";
        cin >> update;
        creditAccounts += -update;
        break;
    case '4':
        cout << "How much would you like to subtract from Rent: ";
        cin >> update;
        rent += -update;
        break;
    case '5':
        cout << "How much would you like to subtract from Utilities: ";
        cin >> update;
        utilities += -update;
        break;
    case '6':
        cout << "How much would you like to subtract from Insurance: ";
        cin >> update;
        insurance += -update;
        break;
    case '7':
        cout << "How much would you like to subtract from Personal: ";
        cin >> update;
        personal += -update;
        break;
    case '8':
        cout << "How much would you like to subtract from Miscellaneous: ";
        cin >> update;
        misc += -update;
        break;
    default:
        cout << "That was an invalid input." << endl;
        break;
    }
    return;
}

void genericBudget::displayAll()
{
    cout << endl << fixed << setprecision(2) << "1. Current Funds: $" << currentFunds << " | 2. Current Savings: $" << currentSavings
        << " | 3. Credit Accounts: $" << creditAccounts << " | 4. Rent: $" << rent << endl << "5. Utilities: $" << utilities
        << " | 6. Insurance: $" << insurance << " | 7. Personal: $" << personal << " | 8. Miscellaneous: $" << misc << endl << endl;
    return;
}

void genericBudget::saveData()
{
    ofstream file;

    file.open("genericData.txt");

    file << currentFunds << endl<< currentSavings << endl << creditAccounts << endl << rent
        << endl << utilities << endl << insurance << endl << personal << endl << misc;

    cout << "File saved successfully." << endl;

    file.close();
}

void genericBudget::loadData()
{
    ifstream file;

    double value;

    file.open("genericData.txt");

    if(file.is_open())
    {
        file >> value;
        currentFunds = value;
        file >> value;
        currentSavings = value;
        file >> value;
        creditAccounts = value;
        file >> value;
        rent = value;
        file >> value;
        utilities = value;
        file >> value;
        insurance = value;
        file >> value;
        personal = value;
        file >> value;
        misc = value;
        cout << "File loaded successfully." << endl;
    }
    else
        cout << "File does not exist." << endl;

    file.close();

}
