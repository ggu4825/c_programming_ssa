#include <stdio.h>

/**
 * @brief countdown
 * 
 * @param x countdown starting point
 */
void countdown(int x);

int main() {
    countdown(10);    // 10부터 0까지 출력
    
    printf("----\n");
    countdown(4);     // 4부터 0까지 출력
    
    return 0;
}

// 함수의 구현
void countdown(int x) {
    // i가 x에서 시작해서 0보다 크거나 같을 때까지 1씩 감소하며 반복
    for (int i = x; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n"); // 출력이 끝난 후 줄바꿈
}