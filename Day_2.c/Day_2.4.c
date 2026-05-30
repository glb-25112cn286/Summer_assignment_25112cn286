//Write a program to check whether a number is palindrome or not.
#include<stdio.h>
int main(){
    int num, rev=0, d, original;
    printf("Enter a number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(original==rev)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    return 0;
}
