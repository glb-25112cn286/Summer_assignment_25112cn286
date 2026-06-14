//Write a program to find missing number in array.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of array (including the missing number): ");
    scanf("%d", &n);

    int arr[n-1];  
    printf("Enter %d elements (from 1 to %d with one missing):\n", n-1, n);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(i = 0; i < n-1; i++) {
        sum += arr[i];
    }
    int missing = total - sum;
    printf("The missing number is: %d\n", missing);
    return 0;
}
