//IT21219702-De Silva G.H.G.T.S.
#include"User.h"
#include"Employee.h"
#include<cstring>
using namespace std;

Employee::Employee(){
strcpy(empId,"");
salary = 0.0;
strcpy(name, "");
strcpy(email, "");
strcpy(password,"");
strcpy(address, "");
contactNo = 0;
age = 0;
strcpy(gender, "");
}
