#include <stdio.h>

// 최대값을 찾는 함수
int findMax(int arr[], int size) {
    int max = arr[0]; // 첫 번째 요소를 초기 최대값으로 설정
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // 더 큰 값을 찾으면 교체
        }
    }
    return max;
}

// 최소값을 찾는 함수
int findMin(int arr[], int size) {
    int min = arr[0]; // 첫 번째 요소를 초기 최소값으로 설정
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // 더 작은 값을 찾으면 교체
        }
    }
    return min;
}

// 평균값을 찾는 함수
double findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // 모든 요소를 더함
    }
    return (double)sum / size; // 정확한 평균을 위해 형변환 후 나눗셈
}

int main() {
    int numbers[] = {3, 50, 7, 10, 25, 60, 2, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]); // 배열의 전체 크기를 요소 하나의 크기로 나누어 길이를 구함

    printf("최대값: %d\n", findMax(numbers, size));
    printf("최소값: %d\n", findMin(numbers, size));
    printf("평균값: %.2f\n", findAverage(numbers, size));

    return 0;
}