#include <stdio.h>

int main () {
    int a = 3;
    printf("a %%d: %d\n", a); // %%는 '%' 문자 자체를 출력.
    printf("a %%i: %i\n", a);
    printf("a %%c: %c\n", a); // ASCII 코드 3번에 해당하는 제어 문자 출력. %c는 문자로 해석.
    printf("a %%f: %f\n", a); // 정수를 실수형으로 출력하려 하면 값이 깨져서 0.000000이 나올 확률이 높음.
    printf("-----\n");

    int b = -3;
    printf("b %%d: %d\n", b);
    printf("b %%i: %i\n", b);
    printf("b %%c: %c\n", b); // 음수를 문자로 표현하려 하면 깨진 기호가 나올 수 있음.
    printf("b %%f: %f\n", b);
    printf("b %%u: %u\n", b); // %u는 부호 없는 정수로 해석.
    printf("-----\n");

    int c = 128;
    printf("c %%d: %d\n", c);
    printf("c %%i: %i\n", c);
    printf("c %%c: %c\n", c); // 128은 ASCII 코드 범위를 벗어나므로, 깨진 기호가 나올 수 있음.
    printf("c %%f: %f\n", c);
    printf("c %%e: %e\n", c); // %e는 실수형을 지수 표기법으로 출력. 정수를 실수형으로 해석하려 하면 값이 깨질 확률이 높음.
    printf("-----\n");

    int d = 127;
    printf("d %%d: %d\n", d);
    printf("d %%i: %i\n", d);
    printf("d %%c: %c\n", d); // 127은 ASCII 코드에서 DEL 제어 문자에 해당하므로, 출력이 깨질 수 있음.
    printf("d %%f: %f\n", d);
    printf("-----\n");

    unsigned char ch = 254;
    printf("ch %%d: %d\n", ch);
    printf("ch %%i: %i\n", ch);
    printf("ch %%c: %c\n", ch); // 254는 ASCII 코드 범위를 벗어나므로, 깨진 기호가 나올 수 있음.
    printf("ch %%f: %f\n", ch);
    printf("-----\n");

    char strc[5] = "abcd"; // 문자열은 null 문자('\0')로 끝나야 하므로, strc[5]는 "abcd"와 null 문자를 저장할 수 있는 충분한 공간이 있음.
    printf("strc %%c: %c\n", strc); // %c에 주소값을 줬으므로, 깨진 글자가 나옴.
    printf("strc %%d: %d\n", strc); // %d에 주소값을 줬으므로, strc 배열의 시작 주소가 정수로 출력됨.
    printf("strc %%s: %s\n", strc); // %s는 문자열을 출력하므로, strc 배열의 시작 주소에서부터 null 문자가 나올 때까지의 문자열이 출력됨.

    return 0;
}