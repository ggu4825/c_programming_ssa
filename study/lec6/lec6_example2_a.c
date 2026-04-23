#include <stdio.h>

#define MAX_SUBJECTS 5

int main() {
    int num_students;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &num_students);

    // 2차원 배열 선언: scores[학생번호][과목번호]
    int scores[num_students][MAX_SUBJECTS];

    // 1. 입력부
    for (int i = 0; i < num_students; i++) {
        printf("학생 %d의 성적 (5 과목): ", i + 1);
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    printf("\n과목별 평균 점수 :\n");
    // 2. 과목별 분석 (열 기준 반복)
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        int sum = 0;
        int max = scores[0][j];
        for (int i = 0; i < num_students; i++) {
            sum += scores[i][j];
            if (scores[i][j] > max) {
                max = scores[i][j];
            }
        }
        double avg = (double)sum / num_students;
        printf("과목 %d: 평균 = %.2f, 최고점수 = %d\n", j + 1, avg, max);
    }

    printf("\n학생별 평균 점수 :\n");
    // 3. 학생별 분석 (행 기준 반복)
    for (int i = 0; i < num_students; i++) {
        int sum = 0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            sum += scores[i][j];
        }
        double avg = (double)sum / MAX_SUBJECTS;
        printf("학생 %d: 평균 = %.2f\n", i + 1, avg);
    }

    return 0;
}