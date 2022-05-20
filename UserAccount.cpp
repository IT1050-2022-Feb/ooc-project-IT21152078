//IT21248030 D.P.N.B.Harischandra
//MLB_WE_01.01_09
#include"UserAccount.h"
#include<cstring>
using namespace std;
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
20
cout << "Enter new email : ";
cin >> email;
cout << "Creat new password : ";
cin >> password;
cout << "Enter new Address : ";
cin >> address;
cout << "Enter new contact No : ";
cin >> contactNo;
}
