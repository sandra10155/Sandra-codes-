/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate functions 
*/

#include <stdio.h>
float calculateelectricbill(int units){
float bill=0;
if(units<=100)
bill=units*10;
else if(units<=200)
bill=(100*10)+(units-100)*15;
else
bill=(100*10)+(100*15)+(units-200)*20;
return 0;
}

int main(){
int units;
printf("enter number of units: ");
scanf("%d",&units);
printf("total electric bill:%.2f\n",calculateelectricbill(units));
return 0;
}

