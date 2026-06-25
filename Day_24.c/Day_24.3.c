//Write a program to Find longest word.
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() {
    char str[200];
    char longest[50];
    char word[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            word[j++] = str[i];
            currLen++;
        } else {
            word[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);
            }
            j = 0;
            currLen = 0;
        }
        i++;
    }
    word[j] = '\0';
    if (currLen > maxLen) {
        maxLen = currLen;
        strcpy(longest, word);
    }
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}
