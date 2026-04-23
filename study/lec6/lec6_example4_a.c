#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("문자열을 입력하세요: ");
    scanf("%s", str); // 공백 없는 문자열 입력

    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    // 포인터 개념을 활용한 위치 교환 (Swap)
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("역순으로 출력된 문자열: %s\n", str);

    return 0;
}