//Write a program to find factorial of a number
#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}