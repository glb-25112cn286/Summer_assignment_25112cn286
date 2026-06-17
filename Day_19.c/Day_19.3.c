//Write a program to Transpose matrix.
#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    printf("Enter no. of columns:");
    scanf("%d",&cols);
    int mat[rows][cols] , trans[cols][rows];
    printf("Enter elements of matrix:");
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose of the matrix is:\n");
    for (int i=0; i<cols; i++){
        for (int j=0; j<rows; j++){
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}