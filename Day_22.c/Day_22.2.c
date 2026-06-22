//Write a program to count words in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, words = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i] == '\t') {
            words++;
        }
    }
    if(strlen(str) > 0) {
        words++;
    }
    printf("Number of words = %d\n", words);
    return 0;
}
