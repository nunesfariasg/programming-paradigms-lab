#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
        }

    printf("Sum = %d\n",sum);

    return 0;

    }