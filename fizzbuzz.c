#include <stdio.h>

int main() {
    for (int h = 1; h < 101; ++h) {
        if (h % 3 == 0) {
            printf("Fizz");
        }
        if (h % 5 == 0) {
            printf("Buzz");
        }
        if (h % 3 != 0 && h % 5 != 0) {
            printf("%d", h); // d is integer, probably stands for decimal or digit
        }
        printf("\n");
    }
}
