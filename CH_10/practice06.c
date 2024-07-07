#include <stdio.h>
#include <stdlib.h>

void square(int *ptr);

int main(void){
    int arr [] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    square(ptr);
}

void square(int *ptr){
    for(int i = 0; i < 5; i++){
        *(ptr + i) = *(ptr + i) * *(ptr + i);
        printf("address of num = %p\n", ptr + i);
        printf("num = %d\n", *(ptr + i));
    }
}