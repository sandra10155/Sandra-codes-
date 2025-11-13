/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate files
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); 
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title borrowed today: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title successfully stored!\n");
    return 0;
}