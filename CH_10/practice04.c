#include <stdio.h>
#include <stdlib.h>

void count(int *ptr);

int main(void){
    int num = 0;
    int *ptr = &num;
    count(ptr);
    count(ptr);
    count(ptr);
}

void count(int *ptr){
    *ptr = *ptr + 1;
    printf("address of num = %p\n", ptr);
    printf("num = %d\n", *ptr);
}

