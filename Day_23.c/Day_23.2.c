//Write a program to Find first repeating character.
#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 256  
int main() {
    char str[100];
    int freq[CHAR_SIZE] = {0};
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] == 2) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }
    printf("No repeating character found.\n");
    return 0;
}
