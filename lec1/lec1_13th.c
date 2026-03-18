#include <stdio.h>

int main() {
    printf("3 == 2: %c\n", 3 == 2 ? 'T' : 'F');
    printf("3 > 2: %c\n", 3 > 2 ? 'T' : 'F');
    printf("3 < 2: %c\n", 3 < 2 ? 'T' : 'F');

    printf("%d\n", 1.0 == 0.1 + 0.9);
    return 0;
}