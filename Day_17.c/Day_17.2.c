//Write a program to do Union of arrays.
#include <stdio.h>
int exists(int arr[], int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int union_arr[n1 + n2];
    int size = 0;
    for (int i = 0; i < n1; i++) {
        if (!exists(union_arr, size, arr1[i])) {
            union_arr[size++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++) {
        if (!exists(union_arr, size, arr2[i])) {
            union_arr[size++] = arr2[i];
        }
    }
    printf("Union of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", union_arr[i]);
    }
    return 0;
}
