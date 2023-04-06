/*Write a c program with nested structure implementation with below data, 
Structure 1: Student_Detailes (Name,mailID,Mobile number,Percentage) 
Structure 2:Department(Dept Name,Struct Student_Details,TotalAveverage) 
Program takes input of all the fields above except Total Average per department. Calculate Total Average per department. */


#include <string.h>
#include <stdio.h>
struct Student_Details
    {
        char name[100];
        char mail_id[100];
        char mobile_no[11];
        char percentage[10];
        struct Department
        {
            char dep_name[10];
        }inn;
    }out[1];
int main()
{
    printf("Number of input: 2\n");
    
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%s %s %s %s %s",out[i].name,out[i].mail_id,out[i].mobile_no,out[i].percentage,out[i].inn.dep_name);
    }
    int cmp=strcmp(out[0].inn.dep_name,out[1].inn.dep_name);
    if(cmp==0)
    printf("Number of branches = 1\n");
    else
    printf("Number of branches = 2\n");
    printf("Average percentage per Department\n");
    printf("%s - %s\n", out[0].inn.dep_name,out[0].percentage);
    printf("%s - %s\n", out[1].inn.dep_name,out[1].percentage);
    return 0;
}