//IT21219702-De Silva G.H.G.T.S.
#include"User.h"
#include"RegisteredUser.h"
#include<ctring>
using namespace std;

RegisteredUser::RegisteredUser(){
strcpy(rId,"");
hight = 0.0;
weight = 0.0;
}

RegisteredUser::RegisteredUser(char regId[],double rHight,double rWeight, char rName[], char rEmail[],
char rPassword[], char rAddress[], long int rContactNo, int rAge, char rGender[]){

strcpy(rId, regId);
hight = rHight;
weight = rWeight;
strcpy(name, rName);
strcpy(email,rEmail);
strcpy(password,rPassword);
strcpy(address,rAddress);
contactNo = rContactNo;
age = rAge;
strcpy(gender, rGender);
}

void RegisteredUser::setRegUserLoginDetails(){

cout << "-----------Regitered User login Details-----------" << endl;

cout << "Registered User Id        : ";
cin >> rId;
cout << "Registered User Email     : ";
cin >> email;
cout << "Registered User Password  : ";
}

void RegisteredUser::displayRegUserDetails(){

cout << "-------Display Registerd User Details-------" << endl ;

    cout << "Name of the registered User is : "<< name << endl;
    cout << "ID of the registered User is : "<< rId << endl;
	cout << "Email of the registered User is : "<< email << endl;
  	cout << "Password of the registered User is : "<< password << endl;
  cout << "Address of the registered User is : "<< address << endl;
  cout << "Phone of the registered User is : "<< contactNo << endl;
  cout << "Age of the registered User is : "<< age << endl;
  cout << "Gender of the registered User is : "<< gender << endl;

}

void RegisteredUser::setupdateUserDetails(){

cout << "Enter new email                 : ";
cin >> email;
cout << "Creat new password              : ";
cin >> password;
cout << "Enter new Address               : ";
cin >> address;
cout << "Enter new contact No            : ";
cin >> contactNo;
}