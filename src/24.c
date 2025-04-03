#include <stdio.h>

void main() {
    int i;

    printf("Hello, World!\n");

    for(i = 0; i < 5; i++) {
        if(i % 2 == 0)
            continue;
        else
            printf("*");
    }
}

