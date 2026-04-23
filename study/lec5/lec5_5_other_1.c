#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        i++;
        printf("i-1: %d\n", i);
        int i = 5;
        i--;
        printf("i-2: %d\n", i);
        i++;
        printf("i-3: %d\n", i);
    }
}