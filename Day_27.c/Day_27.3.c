//Write a program to Create salary management system.
#include<stdio.h>
#include<string.h>
#define Max 100

struct Employee {
    int id;
    int name;
    float basicSalary;
    float hra;          //House rent allowance
    float da;           //Dearness allowance
    float grossSalary;
};

int main() {
    struct Employee employees[Max];
    int choice, count = 0, id, found;
    do {
        printf("\n~~~ SALARY MANAGEMENT SYSTEM ~~~\n");
        printf("1.Add Employee salary record\n");
        printf("2.Display all records\n");
        printf("3.Search Employee salary\n");
        printf("4.Update Employee salary\n");
        printf("5.Delete Employee record\n");
        printf("6.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (count<Max) {
                    printf("Enter Employee's ID:");
                    scanf("%d", &employees[count].id);
                    printf("Enter Employee's name:");
                    scanf("%s", &employees[count].name);
                    printf("Enter basic salary:");
                    scanf("%f", &employees[count].basicSalary);
                    employees[count].hra = employees[count].basicSalary * 0.20;
                    employees[count].da = employees[count].basicSalary * 0.10;
                    employees[count].grossSalary = employees[count].basicSalary + employees[count].hra + employees[count].da;
                    count++;
                    printf("Salary record added successfully.\n");
                }
                else {
                    printf("Maximum limit reached.\n");
                }
                break;
            case 2:
                printf("EMPLOYEE SALARY RECORDS:\n");
                for (int i=0; i<count; i++) {
                    printf("ID: %d\n , NAME: %s\n , BASIC SALARY: %f\n , HOUSE RENT ALLOWANCE: %f\n , DEARNESS ALLOWANCE: %f\n , GROSS SALARY: %f\n ", employees[i].id, employees[i].name, employees[i].basicSalary, employees[i].hra, employees[i].da, employees[i].grossSalary);
                }
                break;
            case 3:
                printf("Enter Student ID to search:");
                scanf("%d", &id);
                found = 0;
                for (int i=0; i<count; i++){
                    if (id == employees[i].id) {
                        printf("ID: %d\n , NAME: %s\n , BASIC SALARY: %f\n , HOUSE RENT ALLOWANCE: %f\n , DEARNESS ALLOWANCE: %f\n , GROSS SALARY: %f\n ", employees[i].id, employees[i].name, employees[i].basicSalary, employees[i].hra, employees[i].da, employees[i].grossSalary);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Record not found with ID - %d", id);
                }
                break;
            case 4:
                printf("Enter employee ID to update:");
                scanf("%d", &id);
                found = 0;
                for (int i=0; i<count; i++){
                    if (id == employees[i].id) {
                        printf("Enter new basic salary:");
                        scanf("%f", employees[i].basicSalary);
                        employees[i].hra = employees[i].basicSalary * 0.20;
                        employees[i].da = employees[i].basicSalary * 0.10;
                        employees[i].grossSalary = employees[i].basicSalary + employees[i].hra + employees[i].da;
                        printf("Salary record updated successfully.");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Record not found with ID - %d", id);
                }
                break;
            case 5:
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
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("INVALID CHOICE! TRY AGAIN.\n");
        }
    } while (choice != 6);
    return 0;
}