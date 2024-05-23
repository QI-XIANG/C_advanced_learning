#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 1;
    int sum = 0;
    while(i <= 10){
        sum += i*i;
        i++;
    }
    printf("1^2 + 2^2 + ... + 10^2 = %d", sum);
    return 0;    
}