/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to display the number guessing game
*/

#include <stdio.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));  // seed random number
    secret = rand() % 20 + 1;  // random number between 1 and 20

    do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if(guess > secret)
            printf("Too high!\n");
        else if(guess < secret)
            printf("Too low!\n");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);

    } while(guess != secret);

    return 0;
}