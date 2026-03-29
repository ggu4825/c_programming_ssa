#include <stdio.h>

int main () {
    int a = 2;
    printf("+a: %d\n", +a);
    printf("-a: %d\n", -a);

    int b = 3;
    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a * b: %d\n", a * b);
    printf("a / b: %d\n", a / b);

    float c = 3.0;
    float d = 10.0;
    int e = 10;
    printf("c / d: %f\n", c / d);
    printf("a / d: %f\n", a / d);
    printf("c / e: %f\n", c / e);
    printf("a / e: %d\n", a / e);

    float a2 = 2.0;
    printf("a %% b: %d\n", a % b); // 실수에는 % 연산자 사용 불가. 정수형 데이터에만 허용.
    // printf("a %% c: %f\n", a % c); // c는 실수형이므로 % 연산자 사용 불가.
    // printf("a2 %% b: %f\n", a2 % b); // a2는 실수형이므로 % 연산자 사용 불가.

    return 0;
}