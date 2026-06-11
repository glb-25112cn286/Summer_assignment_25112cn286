//Write a program to Find sum and average of array.
#include<stdio.h>
int main() {
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = (float)sum / n;

    printf("Sum of the array elements is: %d\n", sum);
    printf("Average of the array elements is: %f\n", average);

    return 0;
}