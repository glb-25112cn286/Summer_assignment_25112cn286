//Write a program to find reverse of a number.
#include<stdio.h>
int main(){
    int num,rev=0,d;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    printf("reverse of %d is : %d", num, rev);
    return 0;
}