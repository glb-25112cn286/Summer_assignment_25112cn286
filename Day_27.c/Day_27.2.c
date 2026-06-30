//Write a program to Create employee management system.
#include<stdio.h>
#include<string.h>
#define Max 100

struct Employee {
    int id;
    char name[50];
    int age;
    char department[30];
    float salary;
};

int main() {
    struct Employee employees[Max];
    int choice, count = 0, id, found;
    do {
        printf("~~~ EMPLOYEE MANAGEMENT SYSTEM ~~~");
        printf("1.Add Employee\n");
        printf("2.Display Employee\n");
        printf("Search  Employee\n");
        printf("Delete Employee\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count<Max){
                    printf("Enter Employee's ID:");
                    scanf("%d", &employees[count].id);
                    printf("Enter Employee's name:");
                    scanf("%s", &employees[count].name);
                    printf("Enter Employee's age:");
                    scanf("%d", &employees[count].age);
                    printf("Enter Employee's depaartment:");
                    scanf("%s", &employees[count].department);
                    printf("Enter Employee's salary:");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Student added successfully.\n");
                }
                else {
                    printf("Maximum limit reached.\n");
                }
                break;
            case 2:
                printf("\n~~~ EMPLOYEE RECORDS ~~~\n");
                for (int i=0; i<count; i++){
                    printf ("ID: %d\n , NAME: %s\n , AGE: %d\n , DEPARTMENT: %s\n , SALARY: %f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].department, employees[i].salary);
                }
                break;
            case 3:
                printf("Enter Employee ID to search:");
                scanf("%d", &id);
                found = 0;
                for (int i=0; i<count; i++){
                    if (id == employees[i].id) {
                        printf ("RECORD FOUND:-\n ID: %d\n NAME: %s\n AGE: %d\n DEPARTMENT: %s\n", employees[i].id, employees[i].name, employees[i].age, employees[i].department, employees[i].salary);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Record not found with ID - %d", id);
                }
                break;
            case 4:
                printf("Enter Employee ID to be deleted:");
                scanf ("%d", &id);
                found = 0;
                for (int i=0; i<count; i++){
                    if (id == employees[i].id){
                        for (int j=0; j<count-1; j++){
                            employees[j] = employees[j+1];
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