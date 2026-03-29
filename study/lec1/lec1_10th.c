#include <stdio.h>

int main () {
    int a = 3;
    ++a; // ++a는 a에 1을 더한 후 a의 값을 반환.
    printf("a: %d\n", a);
    printf("a: %d\n", ++a);
    printf("a: %d\n", a);

    a++; // a++는 a의 값을 반환한 후 a에 1을 더함.
    printf("a: %d\n", a);
    printf("a: %d\n", a++);
    printf("a: %d\n", a);

    return 0;
}