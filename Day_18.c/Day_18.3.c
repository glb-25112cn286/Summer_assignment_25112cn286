//Write a program to Binary search.
#include<stdio.h>
void main(){
    int i,a[10],search,first,last,middle,n;
    printf("Enter the no. of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements in array:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements to be searched:\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last){
        if (a[middle]<search){
            first=middle+1;
            middle=(first+last)/2;
        }
        else if (a[middle]==search){
            printf("Thne number %d is found at position %d.",search, middle+1);
            break;
        }
        else{
            last=middle-1;
            middle=(first+last)/2;
        }
    }
    if (first>last){
        printf("The number %d is not found in the given array.",search);
    }
}
