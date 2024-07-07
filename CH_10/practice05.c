#include <stdio.h>
#include <stdlib.h>

void add10(int *ptr);

int main(void){
    int a = 3, b = 5;
    int *ptr1 = &a, *ptr2 = &b;
    add10(ptr1);
    add10(ptr2);
}

void add10(int *ptr){
    *ptr = *ptr + 10;
    printf("address of num = %p\n", ptr);
    printf("num = %d\n", *ptr);
}