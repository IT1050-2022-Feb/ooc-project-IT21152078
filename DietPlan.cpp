//IT21072888-Samarakoon S.M.S.C

#include"DietPlan.h"
#Include<cstring>
using namespace std;

DietPlan::DietPlan()
{
    strcpy(did, "");
    strcpy(dType, "");
    dPrice = 0;
}

DietPlan::DietPlan(char ID[], char Type[], double Price)
{
    strcpy(did,ID);
    strcpy(dType, Type);
    dPrice = Price;
}

void DietPlan::setDietPlanDetails(char ID[], char Type[], double Price)
{
    cout << "-----------Diet Plan Details-----------" << endl;
    cout << "Diet Plan Id : ";
    cin >> did;
    cout << "Diet Plan Type : ";
    cin >> dType;
    cout << "Diet Plan Price : ";
    cin >> dPrice;
}

void DietPlan::displayDietPlanDetails()
{
    cout <<  "ID of the Diet Plan    : " << did << endl;
    cout << "Type of the Diet Plan   : " << dType << endl;
    cout << "Price of the Diet Plan  : " << dPrice << endl;
}

void DietPlan::updateDietPlanDetails()
{
    cout << "Enter New Diet Plan Id    : ";
    cin >> did;
    cout << "Enter New Diet Plan Type  : ";
    cin >> dType;
    cout << "Enter New Diet Plan Price : ";
    cin >> dPrice;
}