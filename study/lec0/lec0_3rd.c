#include <stdio.h>

int main() {
    int a = 1; // int
    printf("a: %d\n", a); // %d는 정수를 출력

    a = a + 1; // 변수는 변경 가능.
    printf("a: %d\n", a);

    float b = 0.2; // float
    printf("b: %f\n", b); // %f는 실수를 출력.

    double c = 0.2; // double
    printf("c: %f\n", c);

    char d = 'a'; // char, 문자는 ''로.
    printf("d: %c\n", d); // %c는 문자 하나를 출력.

    char ds[5] = "abc"; // 문자열은 ""로. 이건 배열.
    printf("ds: %s\n", ds); // %s는 문자열을 출력.
    return 0;
}