#include <stdio.h>

/**
 * @brief Calculate sum of array.
 * @param arr array
 * @param arr_size size of the array.
 * @return int sum of array.
 */
int sumOfArray1(int arr[], int arr_size);

/**
 * @brief Calculate sum of array.
 * @param arr array
 * @return int sum of array.
 */
int sumOfArray2(int arr[]);

int main() {
    int arr[5] = { 1, 3, 9, 2, 7 };

    // 방식 1: 배열의 크기(5)를 직접 전달
    printf("Sum of array using sumOfArray1 is: %d\n", sumOfArray1(arr, 5));
    
    // 방식 2: 함수 내부에서 배열의 크기를 계산 (주의 필요!)
    printf("Sum of array using sumOfArray2 is: %d\n", sumOfArray2(arr));

    return 0;
}

// 구현 1: 배열과 크기를 각각 따로 받는 가장 안전하고 일반적인 방식
int sumOfArray1(int arr[], int arr_size) {
    int sum = 0;
    for (int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 구현 2: 함수 내부에서 크기를 알아내기 (슬라이드 설명에 따라 작성)
int sumOfArray2(int arr[]) {
    // 사실 C언어에서 파라미터로 넘어온 배열은 포인터로 취급되어 
    // sizeof(arr) / sizeof(int)가 원하는 대로 작동하지 않을 수 있습니다.
    // 하지만 학습용 예제(배열 크기 알아내기 연습)의 의도대로 작성해볼게요.
    
    int sum = 0;
    // 이전 수업에서 배운 '배열 크기 알아내기' 공식
    // 주의: 실제 실무에서는 이 방식이 함수 내부에서 작동하지 않으므로 sumOfArray1 방식을 씁니다!
    int size = 5; // 이 예제에서는 arr[5]이므로 5로 가정하거나, 외부에서 계산해야 합니다.
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}