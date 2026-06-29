//Write a program to Create ATM simulation.
#include<stdio.h>
int main() {
    int choice;
    float balance = 1000 , amount;
    while (1){
        printf("...ATM STIMULATION...\n");
        printf("1. Check Balance.\n");
        printf("2. Deposit money.\n");
        printf("3. Withdraw money.\n");
        printf("4. Exit.\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1 :
                printf("Your current balance is : %f\n", balance);
                break;
            case 2 :
                printf("Enter amount to be deposited:");
                scanf("%f", &amount);
                if (amount>0) {
                    balance += amount;
                    printf("Balance after depositing %f amount is : %f\n", amount, balance);
                }
                else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3 :
                printf("Enter amount to be withdrawn:");
                scanf("%f", &amount);
                if (amount>0 && amount<balance){
                    balance -= amount;
                    printf("Balance after withdrawing %f amount is : %f\n", amount, balance);
                }
                else {
                    printf("Invalid withdraw amount.\n");
                }
                break;
            case 4 :
                printf("Thanks for using the ATM.\n");
                break;
            default :
                printf("Invalid choice...Please try again!");
        }
        return 0;
    }
}