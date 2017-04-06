#ifndef GENERICBUDGET_H_INCLUDED
#define GENERICBUDGET_H_INCLUDED

using namespace std;

class genericBudget // Will need more functions
{
private:
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

public:
    genericBudget ();

    void setCurrentFunds(double value);
    void setCurrentSavings(double value);
    void setCurrentDebt(double value);
    void setIncome(double value);
    void setMonthlySavings(double value);
    void setRent(double value);
    void setUtilities(double value);
    void setTransportation(double value);
    void setFood(double value);
    void setInsurance(double value);
    void setEntertainment(double value);
    void setPersonal(double value);
    void setMisc(double value);

    void addTo();
    void subFrom();

};

#endif // GENERICBUDGET_H_INCLUDED
