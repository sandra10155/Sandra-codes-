/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to display the do while loop for password system
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while(strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    return 0;
}