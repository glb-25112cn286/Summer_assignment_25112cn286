//Write a program to add matrices.
#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter no. of rows in matrix:");
    scanf("%d", &rows);
    printf("Enter no. of columns in matrix:");
    scanf("%d", &cols);
    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];
    printf("Enter elements of first matrix:\n");
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
             scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\n", sum[i][j]);
        }
       
    }
    return 0;
}
