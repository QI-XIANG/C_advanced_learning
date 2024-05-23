#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    int sum = 0;
    printf("請輸入一個奇數：");
    scanf("%d", &num);
    for(int i = 1 ; i <= num; i+=2){
        sum += i;
    }
    printf("1 到 %d 的奇數和為 %d\n", num, sum);
}