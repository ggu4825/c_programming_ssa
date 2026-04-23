#include <stdio.h>

int main() {
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("&a[0]: %p\n", &a[0]);
    printf("&a[1]: %p\n", &a[1]);

    int *p = &a[0];
    printf("*p: %d\n", *p); // 결과   *p: 1

    *p = 5;
    printf("*p: %d\n", *p); // 결과   *p: 5
}