#ifndef GENERICBUDGET_H_INCLUDED
#define GENERICBUDGET_H_INCLUDED

using namespace std;

class genericBudget
{
private:
    double currentFunds;
    double currentSavings;
    double creditAccounts;
    double rent;
    double utilities;
    double insurance;
    double personal;
    double misc;

public:
    genericBudget ();

    void setCurrentFunds(double value);
    void setCurrentSavings(double value);
    void setCreditAccounts(double value);
    void setRent(double value);
    void setUtilities(double value);
    void setInsurance(double value);
    void setPersonal(double value);
    void setMisc(double value);

    double getCurrentFunds();
    double getCurrentSavings();
    double getCreditAccounts();
    double getRent();
    double getUtilities();
    double getInsurance();
    double getPersonal();
    double getMisc();

    void updateTotal();
    void addTo();
    void subFrom();
    void displayAll();
    void saveData();
    void loadData();

};

#endif // GENERICBUDGET_H_INCLUDED
