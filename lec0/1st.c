#include<stdio.h>

int main() {
    int height = 4; // 산의 높이
    for (int i = 1; i <= height; i++) {
        // 공백 출력
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

