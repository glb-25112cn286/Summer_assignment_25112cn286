//Write a program to Create voting eligibility system.
#include<stdio.h>
int main() {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age>=18) {
        printf("You are eligible for voting.");
    }
    else {
        printf("You are not eligible for voting.\n");
        printf("You will be eligible for voting after %d years.", 18-age);
    }
    return 0;
}