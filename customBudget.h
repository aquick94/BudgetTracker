#ifndef CUSTOMBUDGET_H_INCLUDED
#define CUSTOMBUDGET_H_INCLUDED

#include <vector>

using namespace std;

class budgetArray
{
    private:
        vector<string> fields;
        vector<double> fieldValues;

    public:
        budgetArray();
        ~budgetArray();
        void addField (string name);
        void updateTotal (string name, double value);
        void addTo();
        void subFrom();
        void adjustTotal(string name, double value);
        void removeField (string name);
        void displayOne (string name);
        void displayAll();
        void saveData();
        void loadData();
};

#endif // CUSTOMBUDGET_H_INCLUDED
