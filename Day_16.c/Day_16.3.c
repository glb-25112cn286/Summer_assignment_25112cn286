//Write a program to find pair with given sum.
#include<stdio.h>
int main(){
    int n,i,j,sum;
    printf("Enter no. of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter sum whose pair is to be found:");
    scanf("%d",&sum);
    printf("Pairs with sum %d are:",sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i]+arr[j] == sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}