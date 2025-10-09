//ATM BANK PROGRAM
/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to display ATM bank withdrwals
*/
#include <stdio.h>//preprocessor directive;Scanf(),Printf[]

//main function

#include <stdio.h>

int main() {
    float balance, withdraw;

    // Prompt user to enter initial balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Allow withdrawals only while balance is greater than 0
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        // Check if withdrawal amount is valid
        if (withdraw > balance) {
            printf("Withdrawal amount exceeds current balance!\n");
        } else {
            balance -= withdraw;  // Deduct withdrawal
            printf("Remaining balance: %.2f\n", balance);
        }

        // If balance becomes zero, stop
        if (balance == 0) {
            printf("\nYour account balance is now zero. No further withdrawals allowed.\n");
        }
    }
    return 0;
}