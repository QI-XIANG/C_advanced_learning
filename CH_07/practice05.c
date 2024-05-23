#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("1 到 100 中 6 的倍數有：");
    for(int i = 1; i <= 100; i++){
        if(i % 6 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}