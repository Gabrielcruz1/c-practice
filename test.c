#include<stdio.h>

int main(){
    int secrectNumber = 5;
    int guess;

    // while guess is not equal to number 
    while(guess != secrectNumber){
        printf("Enter a number: ");
        scanf("%d", & guess);
    };
    printf("YOU WIN");

    return 0;
}

