//Write a program to Print character triangle.
//A
//AB
//ABC
//ABCD
//ABCDE
#include <stdio.h>

int main() {
    int i, j, n;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
