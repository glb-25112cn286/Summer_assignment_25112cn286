//Write a program to Create number guessing game.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random, guess, no_of_guess = 0;
    srand(time(0));
    printf("Welcome to the world of no. guessing game!");
    random = rand() % 100 + 1;
    do{
        printf("\nEnter a number between 1 and 100: ");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess > random){
            printf("Guess a smaller number.\n");
        }
        else if (guess < random){
            printf("Guess a larger number.\n");
        }
        else {
            printf ("Congratulations! You have successfully guessed the correct number.");
        }
    } while (guess != random);
    printf("THANKS FOR PLAYING!");
    return 0;
}
