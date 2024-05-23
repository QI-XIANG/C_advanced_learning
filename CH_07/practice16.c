#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum = 0;
    int i = 1;
    do{
        sum += i;
        i++;
    }while(sum <= 1000);
    printf("1 + 2 + 3 + ... + n > 1000 的 n = %d\n", i-1);
}