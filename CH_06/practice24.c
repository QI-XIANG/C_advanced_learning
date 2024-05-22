#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 0, sum = 0;
    start:
        i++;
        if(i <= 100){
            if(i%2 != 0){
                sum += i;
            }
            goto start;
        }
    printf("1~100奇數總和為%d\n", sum);
    
    return 0;
}