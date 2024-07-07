#include <stdio.h>
#include <stdlib.h>

void add10(int *ptr);

int main(void){
    int arr[5] = {31, 17, 33, 22, 16};
    int *ptr = arr;
    add10(ptr);
}

void add10(int *ptr){
    for(int i = 0; i < 5; i++){
        *(ptr + i) = *(ptr + i) + 10;
        printf("address of num = %p\n", ptr + i);
        printf("num = %d\n", *(ptr + i));
    }
}