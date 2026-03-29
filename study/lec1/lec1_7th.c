#include <stdio.h>

int main() {
    int a = 3;
    int b = 5;
    printf("a & b: %d\n", a & b); // 비트 AND 연산자
    printf("a | b: %d\n", a | b); // 비트 OR 연산자

    printf("a << 2: %d\n", a << 2); // a를 왼쪽으로 2비트 이동
    printf("a >> 1: %d\n", a >> 1); // a를 오른쪽으로 1비트 이동

    return 0;
}