/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate functions 
*/

    #include <stdio.h>
float converttocelcius (float fahrenheit) {
return (fahrenheit-32)*5/9;
}
int main() {
float fahrenheit;
float temperature;
printf("temperature in celcius: %.2f°c\n", converttocelcius(fahrenheit));
return 0;
}