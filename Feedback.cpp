//IT21072888-Samarakoon S.M.S.C

#include"Feedback.h"
#include<cstring>
using namespace std;

Feedback::Feedback(){
feedbackID = 0;
strcpy(description,"");
}
Feedback::Feedback(int f_ID,char des[])
{
feedbackID = f_ID;
strcpy(description, des);

}

void Feedback::displayFeedback()
{
cout << "Feedback ID  : " << feedbackID << endl;
cout << "Description  : " << description << endl;
}