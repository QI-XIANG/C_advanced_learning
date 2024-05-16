#include <stdio.h>
#include <stdlib.h>

int main(void){
    float km;
    printf("請輸入公里數： ");
    scanf("%f", &km);
    float mile = km/1.6;
    printf("英哩數為： %.2f", mile);
}