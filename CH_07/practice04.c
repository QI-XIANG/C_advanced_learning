#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("請輸入一個數字：");
    scanf("%d", &num);
    printf("%d 的因數有：", num);
    for(int i = 1; i <= num ; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
}