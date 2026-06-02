//Write a program to find largest prime factor of a number
#include <stdio.h>
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num, largestPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0 && isPrime(i))
        {
            largestPrime = i;
        }
    }
    if (largestPrime != -1)
    {
        printf("The largest prime factor of %d is %d.\n", num, largestPrime);
    }
    else
    {
        printf("%d has no prime factors.\n", num);
    }
    return 0;
}