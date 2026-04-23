#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // 1. 첫 번째 행렬 입력
    printf("첫 번째 행렬의 행과 열 수 입력 : ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    printf("행렬 요소 입력 :\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // 2. 두 번째 행렬 입력
    printf("두 번째 행렬의 행과 열 수 입력 : ");
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    printf("행렬 요소 입력 :\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // 3. 행렬 덧셈 (크기가 같아야 함)
    if (r1 == r2 && c1 == c2) {
        printf("\n행렬 덧셈 결과 :\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("%d ", mat1[i][j] + mat2[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\n행렬 덧셈 불가 (크기가 다름)\n");
    }

    // 4. 행렬 곱셈 (c1 == r2여야 함)
    if (c1 == r2) {
        int res[r1][c2];
        printf("\n행렬 곱셈 결과 :\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                res[i][j] = 0; // 초기화 필수
                for (int k = 0; k < c1; k++) {
                    res[i][j] += mat1[i][k] * mat2[k][j];
                }
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\n행렬 곱셈 불가 (첫 행렬의 열과 두 번째 행렬의 행 크기 불일치)\n");
    }

    return 0;
}