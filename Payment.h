//IT21072888-Samarakoon S.M.S.C

//Payment class
class Payment
{
private:
char paymentID[10];
double amount;
char type[20];

public:
Payment();
Payment(char rPaymentID[], double rAmount, char rType[]);
void setPaymentDetails(char RPaymentID[], double RAmount, char RType[]);
void validatePayment();
double calPayment();

~Payment();
};