#include <stdio.h>

/**
 * @brief 숫자를 정수와 소수 부분으로 나누어서 할당해주는 함수
 * * @param x 입력 변수
 * @param out_int_part 정수 파트의 주소
 * @param out_frac_part 소수 파트의 주소
 */
void decompose(double x, long* out_int_part, double* out_frac_part) {
    // 1. 정수 부분 추출: double을 long으로 형변환하면 소수점이 버려집니다.
    // 포인터가 가리키는 실제 공간(* 연산자 사용)에 값을 저장합니다.
    *out_int_part = (long)x;

    // 2. 소수 부분 추출: 전체 값에서 정수 부분을 뺍니다.
    *out_frac_part = x - *out_int_part;
}

int main() {
    double pi = 3.141592;
    long int_part;
    double frac_part;

    // 함수 호출 시, 값을 바꿀 변수들의 '주소(&)'를 넘겨줍니다.
    decompose(pi, &int_part, &frac_part);

    printf("pi int part: %ld\n", int_part);
    printf("pi frac part: %f\n", frac_part);

    return 0;
}