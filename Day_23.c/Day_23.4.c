//Write a program to Find maximum occurring character.
#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 256  
int main() {
    char str[200];
    int freq[CHAR_SIZE] = {0};
    int i, maxCount = 0;
    char maxChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i]; i++) {
        if (freq[(unsigned char)str[i]] > maxCount) {
            maxCount = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    if (maxCount > 0)
        printf("Maximum occurring character: '%c' (Frequency: %d)\n", maxChar, maxCount);
    else
        printf("No characters found.\n");
    return 0;
}
