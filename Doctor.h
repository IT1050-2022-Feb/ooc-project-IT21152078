//IT21219702-De Silva G.H.G.T.S.
#include"User.h"
#include"Employee.h"

class Doctor : public Employee{

public:
Doctor();
Doctor(char docId[], double docSalary, char docName[], char docEmail[],
char docPassword[], char docAddress[], long int docContactNo, int docAge, char docGender[]);
void displayDocDetails();
void DoctorFeedback();
~Doctor();
};