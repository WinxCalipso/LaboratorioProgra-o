#include <stdio.h>

int main(void) {
    int num = 15;
    int *ptr = &num;

    printf("Valor antes: %d\n", num);
    *ptr = 50;
    printf("Valor depois: %d\n", num);

    return 0;
}