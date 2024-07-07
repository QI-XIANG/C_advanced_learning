#include <stdio.h>
#include <stdlib.h>

void findMax(int *ptr);

int main(void){
    int A[5] = {74, 48, 30, 17, 62};
    int *ptr = A;
    findMax(ptr);
}

void findMax(int *ptr){
    int max = *ptr;
    for(int i = 0; i < 5; i++){
        if(*(ptr + i) > max){
            max = *(ptr + i);
        }
    }
    printf("The maximum number is %d", max);
}