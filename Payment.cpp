//IT21072888-Samarakoon S.M.S.C

#include"Payment.h"
#include<cstring>
using namespace std;

Payment::Payment()
{
strcpy(paymentID, "");
amount = 0;
strcpy(type, "");
}

Payment::Payment(char rPaymentID[], double rAmount, char rType[])
{
strcpy(paymentID, rPaymentID);
amount = rAmount;
strcpy(type, rType);
}

void Payment::setPaymentDetails(char RPaymentID[], double RAmount, char RType[])
{
strcpy(paymentID, RPaymentID);
amount = RAmount;
strcpy(type, RType);
}

void Payment::validatePayment()
{
int length;
length = strlen(paymentID);
if (length > 1 && length <= 10)
{
cout << "Valid Payment ID" << endl;
}
else
{
cout << "Sorry! Can't Validate details" << endl;
}
}

double Payment::calPayment()
{

}