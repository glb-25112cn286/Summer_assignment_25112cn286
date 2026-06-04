//Write a program to recursive reverse number
#include <stdio.h>
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    } else {
        rev = rev * 10 + n % 10;
        return reverseNumber(n / 10, rev);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverseNumber(num, 0));
    return 0;
}