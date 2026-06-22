//Write a program to Check palindrome string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s", &str);
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    int j, temp;
    for (int i=0; j=length-1 , i<j; i++ , j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        if (str[i] == str[j]){
            printf("Palindrome");
        }
    }
    return 0;
}
