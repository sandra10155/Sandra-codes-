        /*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate files 1
*/

    #include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fputs(title, fp);
    fclose(fp);

    printf("Book title saved successfully.\n");
    return 0;
}