//IT21219702-De Silva G.H.G.T.S.
#include"User.h"
//Registered User class
class RegisteredUser : public User {
protected:
char rId[5];
double hight;
double weight;

public:
RegisteredUser();
RegisteredUser(char regID[],double rHight,double rWeight, char rName[], char rEmail[],
char rPassword[], char rAddress[], long int rContactNo, int rAge, char rGender[]);
void setRegUserLoginDetails();
void displayRegUserDetails();
void setupdateUserDetails();
~RegisteredUser();

};