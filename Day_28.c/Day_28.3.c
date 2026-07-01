//Write a program to Create ticket booking system.
#include <stdio.h>
#include <string.h>

#define MAX 100   

struct Ticket {
    int ticketNo;
    char passengerName[50];
    char destination[50];
    float price;
};

int main() {
    struct Ticket tickets[MAX];
    int count = 0;   
    int choice, i, ticketNo, found;

    do {
        printf("\n--- TICKET BOOKING SYSTEM ---\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Ticket Number: ");
                    scanf("%d", &tickets[count].ticketNo);
                    getchar(); 
                    printf("Enter Passenger Name: ");
                    fgets(tickets[count].passengerName, sizeof(tickets[count].passengerName), stdin);
                    tickets[count].passengerName[strcspn(tickets[count].passengerName, "\n")] = '\0';
                    printf("Enter Destination: ");
                    fgets(tickets[count].destination, sizeof(tickets[count].destination), stdin);
                    tickets[count].destination[strcspn(tickets[count].destination, "\n")] = '\0';
                    printf("Enter Price: ");
                    scanf("%f", &tickets[count].price);

                    count++;
                    printf("Ticket booked successfully!\n");
                } else {
                    printf("Ticket limit reached!\n");
                }
                break;

            case 2:
                printf("\n--- Ticket Records ---\n");
                for (i = 0; i < count; i++) {
                    printf("Ticket No: %d\nPassenger: %s\nDestination: %s\nPrice: %.2f\n\n",
                           tickets[i].ticketNo, tickets[i].passengerName, tickets[i].destination, tickets[i].price);
                }
                if (count == 0) {
                    printf("No tickets booked yet.\n");
                }
                break;

            case 3:
                printf("Enter Ticket Number to search: ");
                scanf("%d", &ticketNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (ticketNo == tickets[i].ticketNo) {
                        printf("\nTicket Found:\nTicket No: %d\nPassenger: %s\nDestination: %s\nPrice: %.2f\n",
                               tickets[i].ticketNo, tickets[i].passengerName, tickets[i].destination, tickets[i].price);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("No ticket found with number %d\n", ticketNo);
                }
                break;

            case 4:
                printf("Enter Ticket Number to cancel: ");
                scanf("%d", &ticketNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (ticketNo == tickets[i].ticketNo) {
                        for (int j = i; j < count - 1; j++) {
                            tickets[j] = tickets[j + 1];
                        }
                        count--;
                        found = 1;
                        printf("Ticket cancelled successfully!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("No ticket found with number %d\n", ticketNo);
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

