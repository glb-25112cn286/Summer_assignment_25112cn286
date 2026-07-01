//Write a program to Create bank account system.
#include <stdio.h>
#include <string.h>

#define MAX 100   

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account bank[MAX];
    int count = 0;   
    int choice, i, accNo, found;
    float amount;

    do {
        printf("\n--- BANK ACCOUNT MANAGEMENT SYSTEM ---\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Account Number: ");
                    scanf("%d", &bank[count].accNo);
                    getchar(); // clear newline
                    printf("Enter Account Holder Name: ");
                    fgets(bank[count].name, sizeof(bank[count].name), stdin);
                    bank[count].name[strcspn(bank[count].name, "\n")] = '\0';
                    printf("Enter Initial Balance: ");
                    scanf("%f", &bank[count].balance);

                    count++;
                    printf("Account created successfully!\n");
                } else {
                    printf("Bank account limit reached!\n");
                }
                break;

            case 2:
                printf("\n--- Account Records ---\n");
                for (i = 0; i < count; i++) {
                    printf("Account No: %d\nName: %s\nBalance: %.2f\n\n",
                           bank[i].accNo, bank[i].name, bank[i].balance);
                }
                if (count == 0) {
                    printf("No accounts found.\n");
                }
                break;

            case 3:
                printf("Enter Account Number to search: ");
                scanf("%d", &accNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (accNo == bank[i].accNo) {
                        printf("\nAccount Found:\nAccount No: %d\nName: %s\nBalance: %.2f\n",
                               bank[i].accNo, bank[i].name, bank[i].balance);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("No account found with number %d\n", accNo);
                }
                break;

            case 4:
                printf("Enter Account Number to deposit: ");
                scanf("%d", &accNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (accNo == bank[i].accNo) {
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        bank[i].balance += amount;
                        printf("Deposit successful! New Balance: %.2f\n", bank[i].balance);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("No account found with number %d\n", accNo);
                }
                break;

            case 5:
                printf("Enter Account Number to withdraw: ");
                scanf("%d", &accNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (accNo == bank[i].accNo) {
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);
                        if (amount <= bank[i].balance) {
                            bank[i].balance -= amount;
                            printf("Withdrawal successful! New Balance: %f", bank[i].balance);
                        } else {
                            printf("Insufficient balance!\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("No account found with number %d\n", accNo);
                }
                break;

            case 6:
                printf("Enter Account Number to delete: ");
                scanf("%d", &accNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (accNo == bank[i].accNo) {
                        for (int j = i; j < count - 1; j++) {
                            bank[j] = bank[j + 1];
                        }
                        count--;
                        found = 1;
                        printf("Account deleted successfully!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("No account found with number %d\n", accNo);
                }
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}

