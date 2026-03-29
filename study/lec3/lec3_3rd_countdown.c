#include <stdio.h>

int main() {
    int i; // for countdown.
    for (i = 11; i > 0; i--) {
        printf("for countdown-1 %02d\n", (i - 1));
    }

    printf("-----\n");

    // while countdown.

    i = 10;
    while (i>= 0) {
        printf("while countdown-1 %02d\n", i);
        i--;
    }

    printf("-----\n");

    // do-while countdown.

    i = 10;
    do {
        printf("do-while countdown-1 %02d\n", i);
        i--;
    } while (i >= 0);

    return 0;
}