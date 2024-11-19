#include <stdio.h>
#include <string.h>

char mystr1[8];
char mystr2[8];

void win() {
    printf("You win!\n");
}

void main() {
    memset(mystr1, '\0', sizeof(mystr1));
    strcpy(mystr2, "lose");

    printf("Enter something: \n");
    gets(mystr1);
    printf("You entered: %s\n", mystr1);
    printf("mystr2 is: %s\n", mystr2);
    if (strcmp(mystr2, "win") == 0) {
        win();
    } else {
        printf("You lose!\n");
    }
}