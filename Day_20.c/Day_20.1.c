//Write a program to Multiply matrices.
#include<stdio.h>
int main(){
    int r1 , c1 , r2 , c2 ;
    printf("Enter no. of rows in first matrix:");
    scanf("%d" , &r1);
    printf("Enter no. of columns in first matrix:");
    scanf("%d" , &c1);
    printf("Enter no. of rows in second matrix:");
    scanf("%d" , &r2);
    printf("Enter no. of columns in second matrix:");
    scanf("%d" , &c2);
    if ( r1 != r2 ) {
        printf("Matrix multiplication is not possible.\n");
    }
    int mat1[r1][c1] , mat2[r2][c2] , result[r1][c2] ;
    printf("Enter elements of first matrix:");
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:");
    for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i=0; i<r1; i++){
        for (int j=0; j<c2; j++){
            result[i][j] = 0;
        }
    }
    for (int i=0; i<r1; i++){
        for (int j=0; j<c2; j++){
            for (int k=0; k<c1; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            } 
        }
    }
    printf("Resultant matrix:\n");
    for (int i=0; i<r1; i++){
        for (int j=0; j<c2; j++){
            printf("%d", &result[i][j]);
        }
        printf("\n");
    }
    return 0;
}