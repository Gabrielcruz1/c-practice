#include <stdio.h>

int main(){
    int secrectNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    // while guess is not equal to number and out of guesses is 0
    while (guess != secrectNumber && outOfGuesses == 0) {
        if (guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    };
    if(outOfGuesses == 1){
        printf("Out of Guesses");
    } else {
    printf("YOU WIN");
    }
    return 0;
};




