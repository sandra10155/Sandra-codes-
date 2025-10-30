/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate arrays 
*/

    #include <stdio.h>
int main() {
float revenue [7];
float total =0, average;
int i;
printf("enter revenue of each day of the week:\n");
for(i=0;i<7;i++){
printf("day %d: ",i+1);
scanf("%f",&revenue[i]);
total+=revenue [i];
}
average=total/7.0;
printf("\n total weekly revenue: %.2f\n",total);
printf("average daily revenue:%.2f\n",average);
return 0;
}