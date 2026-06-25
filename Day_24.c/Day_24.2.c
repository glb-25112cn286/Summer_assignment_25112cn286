//Write a program to Compress a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, count;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Compressed string: ");
    for (i = 0; i < strlen(str); i++) {
        count = 1;
        while (i < strlen(str) - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c", str[i]);
        if (count > 1) {
            printf("%d", count);
        }
    }
    printf("\n");
    return 0;
}
