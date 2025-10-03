/*
Name: Sandra Chepchirchir   
Reg no:PA106/G/28702/25
Description: program to display exam elligibility  
*/

#include<stdio.h>
int main()
{
int attendance,average;
    printf("enter attendance");
    scanf("%d",&attendance);
    printf("enter average marks");
    scanf("%d",&average);
    if(attendance>=70&&average>=40)
    printf("elligible");
    else
    printf("not elligible");
    return 0;
}
