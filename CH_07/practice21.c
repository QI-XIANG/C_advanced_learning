#include <stdio.h>  
#include <stdlib.h>

int main(void){
    int i = 0;
    int sum = 0;
    while(sum <= 1000){
        i++;
        sum += i;
    }
    printf("1 + 2 + 3 + ... + n > 1000 的 n = %d\n", i);
}