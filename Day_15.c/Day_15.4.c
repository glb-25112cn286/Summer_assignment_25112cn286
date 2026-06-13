//Write a program to Move zeroes to end. 
#include <stdio.h>
void moveZeroesToEnd(int arr[], int n) {
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; 
        }
    }
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    moveZeroesToEnd(arr, n);
    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
