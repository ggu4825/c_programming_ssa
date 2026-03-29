#include <stdio.h>

int main() {
    int var_floor = 3; // 층 수를 입력합니다.
    int var_ho = 4; //호 수를 제공합니다.

    /*
    7층은 VIP 층이라 모든 호수에서 ev5를 사용할 때
    가장 상단에 7층을 걸러내는 예외 처리 조건문이 추가됨

    if (var_floor == 7) {
    printf("need to use ev5.\n");
    } else if ···

    ?? 만약 &&로 조건을 중첩했다면 ??
    ▶ 각 if문마다 '7층이 아니다'라는 조건을 중복해서 넣어 줘야 함.
    ▶ 코드가 매우 길어지고 지저분해짐.
    ▶ '8층도 VIP층이다.'라는 조건이 추가되면 모든 줄을 수정해야 함.
    */

    // 층 수가 홀수이고, 호 수가 홀수이면, ev1을 사용합니다.
    // 층 수가 홀수이고, 호 수가 짝수이면, ev2를 사용합니다.
    if (var_floor % 2 != 0) {
        if (var_ho % 2 != 0) {
            printf("need to use ev1.\n");
        } else {
            printf("need to use ev2.\n");
        }
    }
    // 층 수가 짝수이고, 호 수가 홀수이면, ev3을 사용합니다.
    // 층 수가 짝수이고, 호 수가 짝수이면, ev4를 사용합니다.
    else {
        if (var_ho % 2 != 0) {
            printf("need to use ev3.\n");
        } else {
            printf("need to use ev4.\n");
        }
    }

    return 0;
}