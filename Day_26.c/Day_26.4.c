//Write a program to Create quiz application.
#include <stdio.h>
int main() {
    int choice, score = 0;
    printf("===== Quiz Application =====\n");
    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Delhi.\n");
    }
    // Question 2
    printf("\nQ2. Who is known as the father of C language?\n");
    printf("1. James Gosling\n2. Dennis Ritchie\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Dennis Ritchie.\n");
    }
    // Question 3
    printf("\nQ3. Which data type is used to store a single character in C?\n");
    printf("1. int\n2. char\n3. float\n4. double\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is char.\n");
    }
    // Final Score
    printf("\n===== Quiz Finished =====\n");
    printf("Your final score is: %d/3\n", score);
    return 0;
}
