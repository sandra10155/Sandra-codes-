/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate files
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    struct Student s;
    FILE *file;

    file = fopen("results.dat", "rb"); 
    if (file == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("-----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\nReg No: %s\nMarks: %.2f\n\n", s.name, s.regNo, s.marks);
    }

    fclose(file);
    return 0;
}