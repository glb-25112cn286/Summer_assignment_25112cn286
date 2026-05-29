//Write a program to count digits in a number
#include <stdio.h>
int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    if (num == 0) {
        count = 1;
    } else {
        
        num = num < 0 ? -num : num; 
        while (num > 0) {
            num /= 10; 
            count++;  
        }
    }

    printf("Number of digits in the entered integer is: %d\n", count);
    return 0;
}