#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("1 到 100 中 3 和 7 的公倍數有：");
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 7 == 0){
            printf("%d ", i);
        }
    }
}