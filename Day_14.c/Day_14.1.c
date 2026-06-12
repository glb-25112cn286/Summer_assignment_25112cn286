//Write a program to Linear search.
#include<stdio.h>
void main(){
    int a[100],i,flag=0,n,item;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if (item==a[i]){
            flag=1;
            break;
        }
    }
    if (flag==1){
        printf("Search is successful and location %d",i+1);
    }
    else{
        printf("Search is unsuccessful.");
    }   
}