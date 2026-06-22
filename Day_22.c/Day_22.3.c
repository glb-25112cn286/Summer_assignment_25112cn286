//Write a program to Character frequency.
#include <stdio.h>
#include <string.h>
int main() {
    char sen[200];
    int freq[256] = {0};  
    int i;
    printf("Enter a sentence: ");
    fgets(sen, sizeof(sen), stdin);
    for(i = 0; sen[i] != '\0'; i++) {
        freq[(unsigned char)sen[i]]++;
    }
    printf("\nCharacter frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}
