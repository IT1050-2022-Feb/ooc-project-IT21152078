//IT21072888-Samarakoon S.M.S.C

class DietPlan //Creating a DietPlan class
{
//Declaring private propeties
private:
    char did[5];
    char dType[20];
    double dPrice;

//Declare public method
public:
    DietPlan(); //Default constructor
    DietPlan(char ID[], char Type[], double Price);
    void setDietPlanDetails(char ID[], char Type[], double Price);
    //Display diet plan details
    void displayDietPlanDetails();
    void updateDietPlanDetails();
   
    ~DietPlan(); //Destructor
};