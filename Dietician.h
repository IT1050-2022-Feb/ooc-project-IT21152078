//IT21219702-De Silva G.H.G.T.S.
#include"User.h"
#include"Employee.h"

class Dietician : public Employee{

public:
Dietician(char dId[], double dSalary, char dName[], char dEmail[],
char dPassword[], char dAddress[], long int dContactNo, int dAge, char dGender[]);
void displayDieticianDetails();
~Dietician();

};