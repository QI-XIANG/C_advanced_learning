#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum = 0;
    for(int i = 1; i <= 49; i+=2){
        sum += (i*i-(i+1)*(i+1));
    }
    printf("數字和為 %d", sum);
}