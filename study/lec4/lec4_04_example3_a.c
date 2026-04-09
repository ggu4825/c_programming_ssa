#include <stdio.h>

/**
 * @brief Checks if `a` is prime number or not.
 * * @param number - The value to check.
 * @return int - 1 if `number` is prime number, 0 otherwise.
 */
int isPrime(int number);

int main() {
    int number = 29;
    if (isPrime(number)) {
        printf("%d is prime number.\n", number);
    } else {
        printf("%d is not prime number.\n", number);
    }

    return 0;
}

// 함수의 구현
int isPrime(int number) {
    // 1. 1 이하의 숫자는 소수가 아님
    if (number <= 1) {
        return 0;
    }

    // 2. 2부터 (number - 1)까지 숫자로 나누어 보기
    for (int i = 2; i < number; i++) {
        // 만약 나누어떨어지는 숫자가 있다면 소수가 아님
        if (number % i == 0) {
            return 0;
        }
    }

    // 3. 위 반복문을 모두 통과했다면 소수임
    return 1;
}