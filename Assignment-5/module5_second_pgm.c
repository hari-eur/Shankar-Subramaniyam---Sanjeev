/* Write structure with below mentioned variables and make the sizeof struct return 8 bytes only.But it should take input for all the below values and print the same.
Variables in the structure: 
Hours 
Minutes 
Seconds 
Day 
Month  
Year 
*/

#include <string.h>
#include <stdio.h>
struct Time
    {
        short int hour;
        char min;
        char sec;
        char day;
        char  mon;
        short int year;
    };
int main()
{
    struct Time t1;
    scanf("%hd %c %c %c %c %hd", &t1.hour, &t1.min, &t1.sec, &t1.day, &t1.mon, &t1.year);
    printf("%hd %c %c %c %c %hd\n", t1.hour, t1.min, t1.sec, t1.day, t1.mon, t1.year);
    printf("%lu",sizeof(t1));
    return 0;
    
}