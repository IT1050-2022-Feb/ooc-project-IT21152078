//IT21219702-De Silva G.H.G.T.S.
#include"User.h"
#include"Employee.h"
#include"Doctor.h"
#include<cstring>
using namespace std;

Doctor::Doctor(char docId[], double docSalary,char docName[], char docEmail[],
char docPassword[], char docAddress[], long int docContactNo, int docAge, char docGender[]){

strcpy(empId,docId);
salary = docSalary;
strcpy(name, docName);
strcpy(email,docEmail);
strcpy(password,docPassword);
strcpy(address,docAddress);
contactNo = docContactNo;
age = docAge;
strcpy(gender, docGender);

}