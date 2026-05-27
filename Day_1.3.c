//Write a program to find factorial of a number
#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}