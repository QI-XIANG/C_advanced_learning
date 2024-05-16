#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("請輸入華式溫度： ");
    float f;
    scanf("%f", &f);
    float c = (f-32)*5/9;
    printf("攝氏溫度為： %.2f", c);
}