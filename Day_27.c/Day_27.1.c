//Write a program to Create student record management system.
#include<stdio.h>
#include<string.h>
#define Max 100

struct Student {
    int id;
    char name[50];
    int age;
    char grade[5];
} ;

int main() {
    struct Student students[Max];
    int choice, count = 0, id, found;
    do {
        printf("~~~ STUDENT RECORD MANAGEMENT SYSTEM ~~~\n");
        printf("1.Add Student\n");
        printf("2.Display Student\n");
        printf("3.Search Student\n");
        printf("4.Delete Student\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < Max) {
                    printf("Enter Student's ID:");
                    scanf("%d", &students[count].id);
                    printf("Enter Student's name:");
                    scanf("%s", &students[count].name);
                    printf("Enter Student's age:");
                    scanf("%d", &students[count].age);
                    printf("Enter Student's grade:");
                    scanf("%s", &students[count].grade);
                    count++;
                    printf("Student added successfully.\n");
                }
                else {
                    printf("Maximum limit reached.\n");
                }
                break;
            case 2:
                printf("\n~~~ STUDENT RECORDS ~~~\n");
                for (int i=0; i<count; i++){
                    printf ("ID: %d\n , NAME: %s\n , AGE: %d\n , GRADE: %s\n", students[i].id, students[i].name, students[i].age, students[i].grade);
                }
                break;
            case 3:
                printf("Enter Student ID to search:");
                scanf("%d", &id);
                found = 0;
                for (int i=0; i<count; i++){
                    if (id == students[i].id) {
                        printf ("RECORD FOUND:-\n ID: %d\n NAME: %s\n AGE: %d\n GRADE: %s\n", students[i].id, students[i].name, students[i].age, students[i].grade);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Record not found with ID - %d", id);
                }
                break;
            case 4:
                printf("Enter Student ID to be deleted:");
                scanf ("%d", &id);
                found = 0;
                for (int i=0; i<count; i++){
                    if (id == students[i].id){
                        for (int j=0; j<count-1; j++){
                            students[j] = students[j+1];
                        }
                    }
                    count--;
                    found = 1;
                    printf("Record deleted successfully!\n");
                    break;
                }
                if (!found){
                    printf("No record found with ID - %d\n", id);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default :
                printf("INVALID CHOICE! TRY AGAIN.\n");
        }
    } while (choice != 5);
    return 0;
}