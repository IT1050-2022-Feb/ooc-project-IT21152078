//IT21248030 D.P.N.B.Harischandra
//MLB_WE_01.01_09
//Report class
#include"RegisteredUser.h"
#include<cstring>
using namespace std;
class Report{
private:
char repId[5];
char repDate[10];
RegisteredUser *pReport;
public:
Report()
{
strcpy(repId,"");
strcpy(repDate, ""); }
Report(char reportId[], char reportDate[]) {
strcpy(repId,reportId);
strcpy(repDate,reportDate); }
void generateUserReport(RegisteredUser
*R1 ){
pReport = R1; }
void displayUserReport() {}
};

//IT21248030 D.P.N.B.Harischandra
//MLB_WE_01.01_09
//UserAccount class
#include"RegisteredUser.h"

class UserAccount : public RegisteredUser {
protected :
char UserAccountId[5];
public:
UserAccount();
UserAccount(char aId[], char aName[], char aEmail[],
char aPassword[], char aAddress[], long int aContactNo, int aAge, char
aGender[]);
void displayUserAccountDetails();
void setupdateUserAccountDetails();
~UserAccount();
};

//IT21248030 D.P.N.B.Harischandra
//MLB_WE_01.01_09
UserAccount::UserAccount()
{
strcpy(UserAccountId, "");
}
UserAccount :: UserAccount(char aId[], char aName[], char aEmail[],
char aPassword[], char aAddress[], long int aContactNo, int aAge, char
aGender[]){
strcpy(UserAccountId,aId);
strcpy(name,aName);
strcpy(email,aEmail);
strcpy(password,aPassword);
strcpy(address,aAddress);
contactNo = aContactNo;
age = aAge;
strcpy(gender, aGender);
}
void UserAccount::displayUserAccountDetails(){
cout << "-------Display Customer Details-------" << endl ;
cout << "Name of the customer is : "<< name << endl;
cout << "ID of the customer is : "<< rId << endl;
cout << "Email of the customer is : "<< email << endl;
cout << "Password of the customer is : "<< password << endl;
cout << "Address of the customer is : "<< address << endl;
cout << "Phone of the customer is : "<< contactNo << endl;
cout << "Age of the customer is : "<< age << endl;
cout << "Gender of the customer is : "<< gender << endl;
}
void UserAccount::setupdateUserAccountDetails(){

cout << "Enter new email : ";
cin >> email;
cout << "Creat new password : ";
cin >> password;
cout << "Enter new Address : ";
cin >> address;
cout << "Enter new contact No : ";
cin >> contactNo;
}
