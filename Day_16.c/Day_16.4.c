//Write a program to Remove duplicates from array.
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter no. of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else{
                j++;
            }
        }
    }
    printf("Array after removing duplicate elements is :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}