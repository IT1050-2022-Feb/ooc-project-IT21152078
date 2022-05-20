//IT21248030 D.P.N.B.Harischandra
//MLB_WE_01.01_09
//Report class
#include"RegisteredUser.h"
#include<cstring>
using namespace std;
class Report{
private:
char repId[5];
char repDate[10];
RegisteredUser *pReport;
public:
Report()
{
strcpy(repId,"");
14
strcpy(repDate, ""); }
Report(char reportId[], char reportDate[]) {
strcpy(repId,reportId);
strcpy(repDate,reportDate); }
void generateUserReport(RegisteredUser
*R1 ){
pReport = R1; }
void displayUserReport() {}
};
