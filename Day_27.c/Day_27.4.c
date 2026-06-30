//Write a program to Create marksheet generation system.
#include <stdio.h>
#include <string.h>
#define MAX 100   
#define SUBJECTS 5 
struct Student {
    int rollNo;
    char name[50];
    float marks[SUBJECTS];
    float total;
    float percentage;
    char division[20];
};
int main() {
    struct Student students[MAX];
    int count = 0;   
    int choice, i, j, rollNo, found;
    do {
        printf("\n~~~ Marksheet Generation System ~~~\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student Record\n");
        printf("4. Delete Student Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Roll number: ");
                    scanf("%d", &students[count].rollNo);
                    printf("Enter Name: ");
                    scanf("%s", &students[count].name);
                    students[count].total = 0;
                    for (j = 0; j < SUBJECTS; j++) {
                        printf("Enter marks for Subject %d: ", j+1);
                        scanf("%f", &students[count].marks[j]);
                        students[count].total += students[count].marks[j];
                    }
                    students[count].percentage = students[count].total / SUBJECTS;
                    if (students[count].percentage >= 60)
                        strcpy(students[count].division, "First Division");
                    else if (students[count].percentage >= 45)
                        strcpy(students[count].division, "Second Division");
                    else if (students[count].percentage >= 33)
                        strcpy(students[count].division, "Third Division");
                    else
                        strcpy(students[count].division, "Fail");

                    count++;
                    printf("Record added successfully!\n");
                } else {
                    printf("Maximum limit reached!\n");
                }
                break;
            case 2:
                printf("\n~~~ Student Marksheet Records ~~~\n");
                for (i = 0; i < count; i++) {
                    printf("Roll No: %d | Name: %s | Total: %.2f | Percentage: %.2f | Division: %s\n",
                           students[i].rollNo, students[i].name,
                           students[i].total, students[i].percentage,
                           students[i].division);
                }
                break;
            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &rollNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (students[i].rollNo == rollNo) {
                        printf("Record Found: Roll No: %d | Name: %s\n", students[i].rollNo, students[i].name);
                        printf("Marks: ");
                        for (j = 0; j < SUBJECTS; j++) {
                            printf("Subject %d: %.2f ", j+1, students[i].marks[j]);
                        }
                        printf("\nTotal: %.2f | Percentage: %.2f | Division: %s\n",
                               students[i].total, students[i].percentage, students[i].division);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("No record found with Roll No %d\n", rollNo);
                }
                break;
            case 4:
                printf("Enter Roll Number to delete: ");
                scanf("%d", &rollNo);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (students[i].rollNo == rollNo) {
                        for (int k = i; k < count - 1; k++) {
                            students[k] = students[k + 1];
                        }
                        count--;
                        found = 1;
                        printf("Record deleted successfully!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("No record found with Roll No %d\n", rollNo);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);
    return 0;
}
