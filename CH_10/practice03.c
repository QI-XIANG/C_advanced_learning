#include <stdio.h>
#include <stdlib.h>

void address(float *ptr);

int main(void){
    float pi = 3.14f;
    float *ptr = &pi;
    address(ptr);
}

void address(float *ptr){
    printf("於位置%p內，儲存的變數內容為%.2f", ptr, *ptr);
}