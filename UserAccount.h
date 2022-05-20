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