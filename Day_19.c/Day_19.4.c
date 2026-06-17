//Write a program to Find diagonal sum.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int mat[n][n], primarySum = 0, secondarySum = 0;
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        primarySum += mat[i][i];           
        secondarySum += mat[i][n - i - 1];
    }
    printf("Primary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);
    printf("Total of both diagonals = %d\n", primarySum + secondarySum);
    return 0;
}
