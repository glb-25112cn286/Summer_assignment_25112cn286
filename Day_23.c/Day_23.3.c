//Write a program to Check anagram strings.
#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 256 
int main() {
    char str1[100], str2[100];
    int freq[CHAR_SIZE] = {0};
    int i;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }
    for (i = 0; str1[i]; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for (i = 0; str2[i]; i++) {
        freq[(unsigned char)str2[i]]--;
    }
    for (i = 0; i < CHAR_SIZE; i++) {
        if (freq[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }
    printf("Strings are anagrams.\n");
    return 0;
}
