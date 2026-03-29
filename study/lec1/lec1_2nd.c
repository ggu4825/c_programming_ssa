#include <stdio.h>

int main () {
    int num1, num2;

    printf("첫 번째 정수 : ");
    scanf("%d", &num1); // %d는 정수형 입력을 받을 때 사용. &num1은 num1 변수의 주소를 전달하여 입력된 값을 저장할 수 있도록 함.
    printf("두 번째 정수 : ");
    scanf("%d", &num2);

    printf("입력한 정수는 각각 [%d]와 [%d]입니다.\n", num1, num2);
    return 0;
}