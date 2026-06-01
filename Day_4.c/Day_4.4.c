//Write a program to print armstron numbers in a range
#include <stdio.h>
int main()
{
    int lower, upper, n, original, remainder, result;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (n = lower; n <= upper; n++)
    {
        original = n;
        result = 0;
        while (original != 0)
        {
            remainder = original % 10;
            result += remainder * remainder * remainder;
            original /= 10;
        }
        if (result == n)
            printf("%d ", n);
    }
    return 0;
}