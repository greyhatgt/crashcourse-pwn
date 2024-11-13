
#include <stdio.h>

void main() {
    char mystr[40] = "Hello World";
    printf("%p\n", mystr);

    printf("%d\n", mystr[0]); // 1
    printf("%d\n", *(mystr+1)); // 2
    
    puts(mystr[0]);
}

