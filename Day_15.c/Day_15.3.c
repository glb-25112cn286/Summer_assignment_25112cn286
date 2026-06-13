//Write a program to Rotate array right.
#include <stdio.h>

void rotateRight(int arr[], int n, int d) {
    int temp[d]; 
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }
    for (int i=0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, d;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);
    d = d%n;
    rotateRight(arr, n, d);
    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
