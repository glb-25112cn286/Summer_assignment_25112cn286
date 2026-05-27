//Write a program to calculate sum of first N natural numbers.
#include<stdio.h>
int main(){
    int N, sum=0;
    printf("Enter the number till which sum has to be found:");
    scanf("%d",&N);
    for (int i=0; i<=N; i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers is: %d",N,sum);
    return 0;
}