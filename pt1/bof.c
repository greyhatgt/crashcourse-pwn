#include <stdio.h>
#include <string.h>

int main() {
    char mystr1[8];
    char mystr2[16];

    memset(mystr1, '\0', sizeof(mystr1));
    memset(mystr2, '\0', sizeof(mystr2));

    

    // printf("%d\n", mystr1);
    // printf("%x\n", mystr1);
    // printf("---\n");
    // printf("%p\n", mystr1);
    // printf("%p\n", mystr2);
    while (1) {
        gets(mystr1);
        printf("%s\n", mystr1);
        printf("%s\n", mystr2);
    }
}
