// Program to print all alphabets from z to a using all three loops

#include<stdio.h>
int main() {
    // Using While loop : 
    char letter = 'z';
    printf("Using While loop :\n");
    while (letter >='a') {
        printf("%c ",letter);
        letter--;
    }
    
    // Using Do While loop : 
    letter = 'z';
    printf("\n\nUsing Do While loop :\n");
    do {
        printf("%c ",letter);
        letter--;
    } while (letter >= 'a');
    
    // Using For loop : 
    printf("\n\nUsing For loop :\n");
    for (letter = 'z'; letter >= 'a'; letter--) {
        printf("%c ",letter);
    }
    return 0;
}
