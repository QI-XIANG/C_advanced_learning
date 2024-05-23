#include <stdio.h>
#include <stdlib.h>

int main(void){
    int counter = 1;
    while(!(counter % 3 == 1 && counter % 5 == 3 && counter % 7 == 2)){
        counter++;
    }
    printf("兔子最少有 %d 隻!!\n", counter);
}