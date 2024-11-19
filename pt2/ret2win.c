#include <stdio.h>


void win() {
    printf("You win!\n");
}

void vuln() {
    char buf[8];
    gets(buf);
}

void main() {
    char buf[8];
    printf("Canary and ASLR have been disabled!\n");
    printf("But I don't call `win` anywhere. Think you can still win?\n");
    vuln();
    printf("You lose!\n");
}
