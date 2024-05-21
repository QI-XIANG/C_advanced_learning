#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("請輸入一個整數 : ");
    scanf("%d", &num);
    if(num < 0){
        num = abs(num);
    }else{
        num = num;
    }
    printf("您輸入的整數絕對值是 : %d\n", num);

    return 0;
}