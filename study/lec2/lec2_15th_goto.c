#include <stdio.h>

// 나누어지는 수가 발견되면 중간에 중단하고 그 결과를 알려 줌.

int main() {
    int d;
    int n = 10;

    for (d = 2; d < n; ++d) {
        if (n % d == 0) {
            goto done;
        }
    }

    return 0;

done:
    if (d < n) {
        printf("%d is divisible by %d\n", n, d);
    } else {
        printf("%d is a prime\n", n);
    }
}