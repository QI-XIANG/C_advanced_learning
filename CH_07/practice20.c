#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i;
    int sum = 0;
    for(i = 1; i <= 100; i++){
        sum += i;
        if(sum >= 1000){
            break;
        }
    }
    printf("1 + 2 + 3 + ... + n > 1000 的 n = %d\n", i);
}