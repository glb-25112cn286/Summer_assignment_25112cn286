//Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, k;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); ) {
            if (str[i] == str[j]) {
                for (k = j; k < strlen(str); k++) {
                    str[k] = str[k + 1];
                }
            } else {
                j++;
            }
        }
    }
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
