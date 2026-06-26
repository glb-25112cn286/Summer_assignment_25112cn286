//Write a program to Sort words by length.
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char words[n][100]; 
    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                char temp[100];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (length: %lu)\n", words[i], strlen(words[i]));
    }
    return 0;
}
