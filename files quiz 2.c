        /*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate files 2
*/
#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    struct Student s;
    FILE *fp = fopen("results.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Student Results:\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Name: %s, Marks: %.2f\n", s.name, s.marks);
    }

    fclose(fp);
    return 0;
}