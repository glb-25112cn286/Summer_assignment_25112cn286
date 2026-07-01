//Write a program to Create contact management system.
#include <stdio.h>
#include <string.h>
#define MAX 100   

struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[MAX];
    int count = 0;   
    int choice, i, id, found;

    do {
        printf("\n--- CONTACT MANAGEMENT SYSTEM ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Contact ID: ");
                    scanf("%d", &contacts[count].id);
                    getchar(); // clear newline
                    printf("Enter Name: ");
                    fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
                    contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';
                    printf("Enter Phone: ");
                    fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
                    contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';
                    printf("Enter Email: ");
                    fgets(contacts[count].email, sizeof(contacts[count].email), stdin);
                    contacts[count].email[strcspn(contacts[count].email, "\n")] = '\0';

                    count++;
                    printf("Contact added successfully!\n");
                } else {
                    printf("Contact list is full!\n");
                }
                break;

            case 2:
                printf("\n--- Contact Records ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d\nName: %s\nPhone: %s\nEmail: %s\n\n",
                           contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
                }
                if (count == 0) {
                    printf("No contacts available.\n");
                }
                break;

            case 3:
                printf("Enter Contact ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (id == contacts[i].id) {
                        printf("\nContact Found:\nID: %d\nName: %s\nPhone: %s\nEmail: %s\n",
                               contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("No contact found with ID %d\n", id);
                }
                break;

            case 4:
                printf("Enter Contact ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (id == contacts[i].id) {
                        for (int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }
                        count--;
                        found = 1;
                        printf("Contact deleted successfully!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("No contact found with ID %d\n", id);
                }
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
