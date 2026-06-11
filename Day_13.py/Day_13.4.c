//Write a program to Count even and odd elements.
#include<stdio.h>
int main() {
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count_even = 0;
    int count_odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    printf("Number of even elements in the array is: %d\n", count_even);
    printf("Number of odd elements in the array is: %d\n", count_odd);

    return 0;
}