#include "customBudget.h"
#include <vector>
#include <iomanip>
#include <algorithm>
#include <fstream>

using namespace std;

budgetArray::budgetArray()
{

}

budgetArray::~budgetArray()
{

}

void budgetArray::addField(string name)
{
    fields.push_back(name);
    fieldValues.push_back(0.0);
    cout << name << " added successfully.";
}

void budgetArray::updateTotal(string name, double value)
{
    if (find(fields.begin(), fields.end(), name) != fields.end() )
    {
        for (int i = 0; i < fields.size(); i++)
        {
            if (fields[i] == name)
            {
                fieldValues[i] = value;
                cout << name << " updated successfully.";
                break;
            }
        }
    }
    else
        cout << name << " does not exist in the current list." << endl;
}

void budgetArray::adjustTotal(string name, double value)
{
    if (find(fields.begin(), fields.end(), name) != fields.end() )
    {
        for (int i = 0; i < fields.size(); i++)
        {
            if (fields[i] == name)
            {
                fieldValues[i] += value;
                cout << name << " updated successfully.";
                break;
            }
        }
    }
    else
        cout << name << " does not exist in the current list." << endl;
}

void budgetArray::addTo()
{
    string f;
    double n;
    cout << "Enter the name of the field would you like to add to: ";
    cin >> f;
    cout << "How much would you like to add? : $";
    cin >> n;
    adjustTotal(f, n);
}

void budgetArray::subFrom()
{
    string f;
    double n;
    cout << "Enter the name of the field would you like to subtract from: ";
    cin >> f;
    cout << "How much would you like to subtract? : $";
    cin >> n;
    adjustTotal(f, -n);
}

void budgetArray::removeField(string name)
{
    if (find(fields.begin(), fields.end(), name) != fields.end())
    {
        for (int i = 0; i < fields.size(); i++)
        {
            if (fields[i] == name)
            {
                fields.erase(fields.begin() + i);
                fieldValues.erase(fieldValues.begin() + i);
                break;
            }
        }
    }
    else
        cout << name << " does not exist in the current list." << endl;
}

void budgetArray::displayOne(string name)
{
    if (find(fields.begin(), fields.end(), name) != fields.end())
    {
        for (int i = 0; i < fields.size(); i++)
        {
            if (fields[i] == name)
            {
                cout << fixed << setprecision(2) << fields[i] << ": $" << fieldValues[i] << endl;
                break;
            }
        }
    }
    else
        cout << name << " does not exist in the current list." << endl;
}

void budgetArray::displayAll()
{
    if (fields.empty())
        cout << "The list is empty." << endl;
    else
    {
        for (int i = 0; i < fields.size(); i++)
        {
            cout << fixed << setprecision(2) << fields[i] << ": $" << fieldValues[i] << " | ";
        }
        cout << endl;
    }

}

void budgetArray::saveData()
{
    ofstream file;

    file.open("data.txt");

    for (int i = 0; i < fields.size(); i++)
    {
        file << fields[i] << "\t" << fieldValues[i] << endl;
    }

    cout << "File saved successfully." << endl;

    file.close();
}

void budgetArray::loadData()
{
    ifstream file;

    string name;
    double value;

    int index = 0;

    file.open("data.txt");

    if(file.is_open())
    {
        while(file >> name >> value)
            {
                fields.push_back(name);
                fieldValues.push_back(value);
            }
        cout << "File loaded successfully." << endl;
    }
    else
        cout << "File does not exist." << endl;

    file.close();

}
