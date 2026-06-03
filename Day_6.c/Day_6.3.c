//Write a program to count set bits in a number
#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        if (number & 1) {
            count++;
        }
        number = number >> 1;
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}

