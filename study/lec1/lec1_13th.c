#include <stdio.h>

int main() {
    printf("3 == 2: %c\n", 3 == 2 ? 't' : 'f'); // 3 == 2는 거짓이므로 'f' 출력.
    printf("3 > 2: %c\n", 3 > 2 ? 't' : 'f');
    printf("3 <= 2: %c\n", 3 <= 2 ? 't' : 'f');
    
    return 0;
}