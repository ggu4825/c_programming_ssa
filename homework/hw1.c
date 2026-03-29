#include <stdio.h> // 표준 입출력 함수를 쓰기 위한 도구함.
#include <stdlib.h> // 랜덤 함수를 쓰기 위한 도구함.
#include <time.h> // 현재 시간을 가져오기 위한 도구함.

// 승패 결과를 상수로 정의.
#define WIN 1
#define DRAW 0
#define LOSE -1

// 승패를 판정하는 함수.
int play_game(int player, int computer) {
    // 비기는 경우.
    if (player == computer) return DRAW;

    // 플레이어가 이기는 경우.
    if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2))
        return WIN;
    
    // 위 조건에 해당하지 않으면 플레이어가 짐.
    return LOSE;
}

// 숫자(1, 2, 3)를 문자열("가위", "바위", "보")로 바꿔 주는 함수.
const char* get_hand_name(int hand) {
    if (hand == 1) return "가위";
    if (hand == 2) return "바위";
    return "보";
}

int main() {
    // 실행할 때마다 랜덤 결과가 달라지도록 현재 시간으로 시드 설정.
    srand(time(NULL));

    // 사용자 닉네임 입력.
    char userName[20]; // 닉네임을 저장할 공간.
    printf("===========================\n당신의 닉네임을 입력하세요.\n(공백 제외)\n: ");
    scanf("%s", userName); // 공백 없는 문자열을 입력받음.

    // 참가자 명단.
    const char* players[] = {userName, "하니", "원영", "나연", "지성", "제노", "재민", "마크"};

    // 상대방을 랜덤하게 섞기.
    for (int i = 7; i > 1; i--) { // 0번은 사용자.
        int j = (rand() % i) + 1; // 1부터 i 사이의 랜덤 인덱스 선택.
        // 두 상대방의 위치를 바꿈.
        const char* temp = players[i];
        players[i] = players[j];
        players[j] = temp;
    }

    // 라운드 이름 정의와 각 라운드별 상대방 선택.
    const char* rounds[] = {"8강", "4강", "결승"};
    int my_opponents[] = {1, (rand()%2 == 0 ? 2 : 3), (rand()%4 == 0 ? 4 : 7)}; 

    printf("===========================\n가위바위보 토너먼트\n===========================\n");
    printf("[대진표]\n---------------------------\n8강\n");

    // 대진표 출력.
    for(int i=0; i<8; i+=2) {
        printf("[%d] %s VS [%d] %s\n", i+1, players[i], i+2, players[i+1]);
    }
    printf("---------------------------\n당신은 [1] 플레이어입니다.\n---------------------------\n\n");

    // 8강부터 결승까지 경기를 진행.
    for (int i = 0; i < 3; i++) {
        const char* opponent = players[my_opponents[i]]; // 현재 라운드 상대방.
        int user_choice, com_choice, result;

        printf("===========================\n[%s] 상대 : %s\n===========================\n", rounds[i], opponent);

        // 비길 경우를 대비한 무한 루프. 승패가 갈려야 탈출.
        while (1) {

            // 1, 2, 3 중 하나를 입력받을 때까지 반복.
            while (1) {
                printf("1: 가위, 2: 바위, 3: 보\n선택 > ");
                scanf("%d", &user_choice);

                // 1, 2, 3 중 하나인지 확인.
                if (user_choice >= 1 && user_choice <= 3) break;
                printf("\n1, 2, 3 중에서 입력하세요.\n\n");
            }

            // 상대방의 패를 1, 2, 3 중 랜덤으로 결정.
            com_choice = (rand() % 3) + 1;

            // 서로의 패 출력.
            printf("\n나: %s   %s: %s\n", get_hand_name(user_choice), opponent, get_hand_name(com_choice));

            // 승패 판정 함수 호출.
            result = play_game(user_choice, com_choice);
            if (result == DRAW) printf("=> 비겼습니다! 재경기!\n\n"); // 비기면 다시 while(1)로.
            else break; // 이기거나 지면 재경기 루프 탈출.
        }

        // 결과에 따른 처리.
        if (result == WIN) {
            printf("=> 이겼습니다!\n");
            if (i < 2) printf("=> %s 진출!\n\n", rounds[i+1]); // 다음 라운드 안내.
            else printf("\n===========================\n축하합니다! 우승!\n===========================\n"); // 마지막 경기 승리 시 우승 출력.
        } else {
            // 한 번이라도 지면 프로그램 종료.
            printf("=> 졌습니다...\n\n===========================\n아쉽습니다. 다음 기회에!\n===========================\n");
            return 0;
        }
    }
    return 0;
}