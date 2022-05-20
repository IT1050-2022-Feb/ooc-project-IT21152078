//IT21072888-Samarakoon S.M.S.C

//Feedback class
class Feedback
{
private :
int feedbackID;
char description[50];

 
public :
Feedback();
Feedback(int f_ID,char des[]);
void displayFeedback();
~Feedback();
 
};