#include <stdio.h>
#include <stdlib.h>

int main(void){
    char str[2][20] = {"Time is money", "Have a good time"};
    char *ptr[2];
    //print the string by puts and the pointer
    for(int i = 0; i < 2; i++){
        ptr[i] = str[i];
        puts(ptr[i]);
    }
}