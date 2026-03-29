#include <stdio.h>

int main() {
    int from = 8;
    int to = 16;
    int baesu = 7;

    int d;

    int found = 0; // 배수를 찾았는지 체크하는 변수.

    // from부터 to까지 하나씩 검사.
    for (d = from; d <= to; d++) {
        if (d % baesu == 0) {
            // 배수를 찾으면 출력.
            printf("from %d to %d, minimum %d baesu is %d.\n", from, to, baesu, d);
            found = 1; // 배수를 찾았다고 표시.
            break; // 더 이상 검사할 필요가 없으므로 반복문 종료.
        }
    }

    // 반복문이 끝날 때까지 못 찾았다면, 배수가 없다는 메시지 출력.
    if (found == 0) {
        printf("from %d to %d, no %d baesu exists\n", from, to, baesu);
    }

    return 0;
}