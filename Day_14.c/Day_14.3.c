//Write a program to  find the second largest element.
#include<stdio.h>
int main(){
    int n,i, arr[100],first,second;
    printf("Enter the no. of elements in an array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for (i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    first=second=0;
    for (i=0;i<=n;i++){
        if (arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    if (second==0){
        printf("No second largest element found.");
    }
    else{
        printf("Second largest element found is: %d\n",second);
    }
}