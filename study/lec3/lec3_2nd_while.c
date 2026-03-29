#include <stdio.h>

int main() {
    int num; // 입력받을 숫자.
    int sum = 0; // 합계를 저장할 변수.

    printf("정수 입력. (0 입력 시 종료.): \n");

    // 0을 입력할 때까지 무한 반복.
    while (1) {
        scanf("%d", &num); // 숫자 입력받기.
        
        if (num == 0) {
            break; // 0이 입력되면 반복문을 빠져나감.
        }

        sum += num; // 입력된 숫자를 합계에 더함.
    }

    printf("수열 합: %d\n", sum);

    return 0;
}