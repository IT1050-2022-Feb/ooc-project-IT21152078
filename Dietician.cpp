//IT21219702-De Silva G.H.G.T.S.
#include"User.h"
#include"Employee.h"
#include"Dietician.h"
#include<cstring>
using namespace std;

Dietician::Dietician(char dId[], double dSalary, char dName[], char dEmail[],
char dPassword[], char dAddress[], long int dContactNo, int dAge, char dGender[]){

strcpy(empId,dId);
salary = dSalary;
strcpy(name, dName);
strcpy(email,dEmail);
strcpy(password,dPassword);
strcpy(address,dAddress);
contactNo = dContactNo;
age = dAge;
strcpy(gender, dGender);

}

void Dietician::displayDieticianDetails(){

  cout << "-----Dietician Details-------" << endl;
  cout << "Name of the dietician : "<< name << endl;
  cout << "Email of the dieticina : "<< email << endl;
  cout << "Address of the dietician : "<< address << endl;
  cout << "Phone of the dietician : "<< contactNo << endl;
 
}