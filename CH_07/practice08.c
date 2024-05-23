#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    double sum = 0;
    printf("請輸入一個數字：");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        sum += (double) 1/i;
    }
    printf("數字和為 %f", sum);
    return 0;
}