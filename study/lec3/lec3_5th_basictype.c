#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'd'; // 문자형 상수는 작은 따옴표.
    
    // 문자 비교.
    if ('a' < 'b') {
        printf("b(%c-%d) is greater than a(%c-%d).\n", 'b', 'b', 'a', 'a');
        // %c는 문자로 출력, %d는 아스키 코드값으로 출력. a는 97, b는 98.
    }

    // 대문자로 전환.
    printf("before c: %c\n", c);
    if ('a' <= c && c <= 'z') {
        c = c - 'a' + 'A';
        // c - 'a'로 c가 a에서 몇 번째 문자인지 구하고, 'A'를 더해서 대문자로 전환.
    }
    printf("after c: %c\n", c);

    return 0;
}