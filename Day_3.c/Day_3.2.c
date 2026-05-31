//Write a program to print prime numbers in a range
#include <stdio.h>
int main()
{
    int lower, upper, i, flag;

    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);
    for (i = lower; i <= upper; i++) {
        if (i == 1) {
            continue;
        }
        flag = 0;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}