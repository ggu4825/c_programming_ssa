#include <stdio.h>

#define MAX_SIZE 100 // 최대 입력 가능한 숫자의 개수.
#define RANGE 100 // 숫자의 범위. (0~99)

int main () {
    int n, i, number;
    int frequency[RANGE] = {0}; // 숫자의 빈도수를 저장할 배열 초기화.
    int arr[MAX_SIZE]; // 사용자로부터 입력받을 숫자를 저장할 배열.

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    /* n이 MAX_SIZE보다 크면?

    if (n > MAX_SIZE) {
        printf("Error: Maximum size is %d.\n", MAX_SIZE);
        return 1; // 비정상 종료를 알리는 리턴값.
    }

    */

    // 사용자로부터 n개의 숫자 입력받기.
    for (i = 0; i < n; i++) {
        scanf("%d", &number);
        arr[i] = number; // 입력받은 숫자를 배열에 저장.
        
        if (number >= 0 && number < RANGE) {
            frequency[number]++; // 입력받은 숫자가 범위 내에 있다면 빈도수 증가.
        }
    }

    /* number가 RANGE 범위를 벗어나면?

        for (i = 0; i < n; i++) {
        scanf("%d", &number);
        if (number >= 0 && number < RANGE) {
            arr[i] = number; 
            frequency[number]++; 
        } else {
            printf("Error: %d is out of range (0~99).\n", number);
            i--; // 반복문 횟수를 하나 되돌린 후 재입력.
        }
    }

    */

    // 빈도수 출력.
    printf("Number Frequency\n");
    for (i = 0; i < RANGE; i++) {
        if (frequency[i] > 0) {
            printf("%d: %d\n", i, frequency[i]);
        }
    }

    return 0;
}