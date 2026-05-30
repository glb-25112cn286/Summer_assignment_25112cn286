//Write a program to find the product of digits
#include<stdio.h>
int main(){
    int num, product=1, d;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        d=num%10;
        product=product*d;
        num=num/10;
    }
    printf("Product: %d", product);
    return 0;
}