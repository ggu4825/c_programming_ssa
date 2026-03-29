#include <stdio.h>

int main() {
    int a = 3;
    printf("a: %d\n", !a); // !a는 a가 0이 아니므로 0 출력.
    int b = 0;
    printf("b: %d\n", !b); // !b는 b가 0이므로 1 출력.

    printf(" 3 && 0: %d\n", 3 && 0); // &&는 all.
    printf(" 3 && 2: %d\n", 3 && 2);

    printf(" 3 || 0: %d\n", 3 || 0); // ||는 any.
    printf(" 3 || 2: %d\n", 3 || 2);

    return 0;
}