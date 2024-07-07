#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num = 12.6f, *ptr;
    ptr = &num;
    printf("num = %.1f\n", num);
    printf("address of num = %p\n", ptr);
}