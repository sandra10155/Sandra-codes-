/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate functions 
*/

#include <stdio.h>
float calculatefair(float distance){
return 50*distance ;
}
int main(){
float distance;
printf("enter distance traveled(in kilometers): ");
scanf("%d",&distance);
printf("total fare =ksh:%.2f\n",calculatefair(distance));
return 0;
}


