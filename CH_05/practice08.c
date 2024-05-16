#include <stdio.h>
#include <stdlib.h>

int main(void){
    float mile;
    printf("請輸入英哩數： ");
    scanf("%f", &mile);
    float km = mile*1.6;
    printf("公里數為： %.2f", km);
    
}