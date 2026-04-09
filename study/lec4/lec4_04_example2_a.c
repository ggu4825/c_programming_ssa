#include <stdio.h>

/**
 * @brief Checks if `a` is greater than `b`.
 * * @param a - The first value to compare.
 * @param b - The second value to compare.
 * @return int - 1 if `a` is greater than `b`, 0 otherwise.
 */
int isGreaterThan(int a, int b);

int main() {
    int a = 3;
    int b = 5;
    
    // 함수의 반환값이 1이면 if문 실행, 0이면 else문 실행
    if (isGreaterThan(a, b)) {
        printf("%d is greater than %d.\n", a, b);
    } 
    else {
        printf("%d is smaller than or equal %d.\n", a, b);
    }

    return 0;
}

// 함수의 구현
int isGreaterThan(int a, int b) {
    if (a > b) {
        return 1; // a가 b보다 크면 1을 반환
    } 
    else {
        return 0; // 그렇지 않으면(작거나 같으면) 0을 반환
    }
}