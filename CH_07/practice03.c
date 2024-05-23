#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 8 == 0){
            sum += i;
        }
    }
    printf("1 到 100 中 3 的倍數且 8 的倍數的數字和為 %d\n", sum);
}