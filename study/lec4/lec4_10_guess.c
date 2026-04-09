/* 사용자가 난수 맞추기 게임 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER (100)

/**
 * @brief Initialize a random number generator
 * with the current time as seed.
 */
void initialize_number_generator(void);

/**
 * @brief Generate and return a random integer
 * between 1 and MAX_NUMBER.
 * @return int Randomly generated integer.
 */
int get_new_secret_number(void);

/**
 * @brief Guess random number from user input.
 * Notify user input is greater than or less than secret number.
 * If user input is same with secret number,
 * print congratulation message with trial count.
 * * @param secret_number
 */
void read_guesses(int secret_number);

int main(void) {
    char command = '\0';
    int secret_number = 0;

    printf("Guess random number between 1 and %d\n", MAX_NUMBER);
    initialize_number_generator();
    do {
        secret_number = get_new_secret_number();
        printf("Guess Number!\n");
        read_guesses(secret_number);
        printf("One more? (Y/N) ");
        scanf("%c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');

    return 0;
}

void initialize_number_generator(void) {
    srand((unsigned)time(NULL));
}

int get_new_secret_number(void) {
    return rand() % MAX_NUMBER + 1;
}

void read_guesses(int secret_number) {
    int guess;
    int num_guesses = 0; // 시도 횟수를 저장할 변수

    while (1) { // 정답을 맞힐 때까지 무한 반복
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        
        // 입력 버퍼 비우기 (개행 문자 제거를 위해 필요할 수 있음)
        while (getchar() != '\n'); 

        if (guess == secret_number) {
            printf("Congratulations! You guessed it in %d trials.\n", num_guesses);
            break; // 정답을 맞혔으므로 반복문 탈출
        } 
        else if (guess < secret_number) {
            printf("Too low; try again.\n");
        } 
        else {
            printf("Too high; try again.\n");
        }
    }
}