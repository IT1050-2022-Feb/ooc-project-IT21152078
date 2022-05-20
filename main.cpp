//IT2152078-R.M.M.D Rathnayaka
//IT21221682-W.W.R.A Thomas
#include"user.h"
#include"RegisteredUser.h"
#include"Employee.h"
#include"Doctor.h"
#include"Dietician.h"
#include"UserAccount.h"
#include"Report.h"
#include"Feedback.h"
#include"Payment.h"
#include"DiatPlan.h"
#include<iostream>
#include<cstring>
using namespace std;
int main(){
//Registered User

RegisteredUser *reg1 = new RegisteredUser("RU001",176.5,48.0,"Dewni", "Dew@gmail.com",
"dew@1234", "Colombo", 9412435679, 21, "Female");

reg1 -> displayRegUserDetails();

cout << endl << endl;

reg1 -> setupdateUserDetails();

//Doctor

Doctor *doc1 = new Doctor("DOC01", 200000.00,"Nilmini", "nilmini@gmailcom",
"nrjnahf", "Dehiwala", 94712782420, 50, "Female");
cout << endl << endl;

doc1 -> displayDocDetails();

//Dietician

Dietician *d1 = new Dietician("DI001", 300000.00,"Arosha", "Aroshanp@gmailcom",
"NilAhf12", "Negombo", 94712782420, 50, "Male");

cout << endl << endl;
d1 -> displayDieticianDetails();

//payment
Payment *P1 = new Payment("PAY01",20000.00, "Credit card");



//Diet Plan
DietPlan* diet1 = new DietPlan("d0001", "The Vegan Diet plans", 3000.00);
cout << endl << endl;

diet1->displayDietPlanDetails();

//Feedback
Feedback *FD1 = new Feedback(0011,"Great healthy diet plan");
cout << endl << endl;

FD1->displayFeedback();

//Report

Report *prep = new Report("REP01", "2022/04/14");


prep -> displayUserReport();

//UserAccount

UserAccount *Acc1 = new UserAccount("ACC01","Malith","malith@gmail.com","jeffkihfi","Colombo",941245783,24,"Male");

Acc1->displayUserAccountDetails();

Acc1->setupdateUserAccountDetails();



return 0;

}