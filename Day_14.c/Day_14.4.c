//Write a program to find duplicates in array.
#include<stdio.h>
int main(){
    int n,i,j,arr[100];
    printf("Enter no. of elements in array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are:");
    for (i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if (arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
}