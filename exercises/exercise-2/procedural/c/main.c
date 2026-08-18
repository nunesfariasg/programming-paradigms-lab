#include <stdio.h>

int main(void) {

    int numberList[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 30;

    for(int i = 0; i < size; i++){

        if(numberList[i] == target){
            printf("target, %d, found\n", numberList[i]);
            return 0;



        }

    }

    printf("target not found\n");
    return 1;
}