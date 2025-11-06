        /*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate files 3
*/
#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total = 0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}