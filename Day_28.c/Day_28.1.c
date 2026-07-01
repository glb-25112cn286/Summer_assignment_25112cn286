//Write a program to Create library management system.
#include <stdio.h>
#include <string.h>
#define Max 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book library[Max];
    int choice, count = 0, id, found;
    do {
        printf("\n~~~ LIBRARY MANAGEMENT SYSTEM ~~~\n");
        printf("1.Add book\n");
        printf("2.Display books\n");
        printf("3.Search book\n");
        printf("4.Delete book\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count<Max) {
                    printf("enter book ID:");
                    scanf("%d", &library[count].id);
                    printf("Enter book's title:\n");
                    fgets(library[count].title, sizeof(library[count].title), stdin);
                    printf("Enter book's author:");
                    fgets(library[count].author, sizeof(library[count].author), stdin);
                    printf("Enter year:");
                    scanf("%d", &library[count].year);
                    count++;
                    printf("Book added successfully.\n");
                }
                else{
                    printf("Library is full.\n");
                }
                break;
            case 2:
                printf("~~~ BOOK RECORDS ~~~");
                for (int i=0; i<count; i++){
                    printf("ID: %d\n , TITLE: %s\n , AUTHOR: %s\n , YEAR: %d\n", library[i].id, library[i].title, library[i].author, library[i].year);
                }
                if (count==0) {
                    printf("No books in the library!");
                }
                break;
            case 3:
                printf("Enter book's ID to be searched:");
                scanf("%d", &id);
                for (int i=0; i<count; i++){
                    if (id == library[i].id){
                        printf("ID: %d\n , TITLE: %s\n , AUTHOR: %s\n , YEAR: %d\n", library[i].id, library[i].title, library[i].author, library[i].year);
                        found = 1;
                        break;
                    }
                }
                if (!found){
                    printf("No book found with id - %d", id);
                }
                break;
            case 4:
                printf("Enter book's id whose record is to be deleted:");
                scanf("%d", &id);
                found = 0;
                for (int i=0; i<count; i++){
                    if (id == library[i].id){
                        for (int j=i; j<count-1; j++) {
                            library[j] = library[j+1];
                        }
                        count--;
                        found = 1;
                        printf("Book deleted successfully.\n");
                        break;
                    }
                }
                if (!found){
                    printf("No book found with id - %d", id);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default: 
                printf("INVALID CHOICE!");
        }
    } while (choice!=5);
    return 0;
}
