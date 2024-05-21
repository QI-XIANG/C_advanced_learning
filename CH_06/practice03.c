#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("請輸入一個整數 : ");
    scanf("%d", &num);
    if(num %2 == 0){
        printf("您輸入的整數是偶數\n");
    }else{
        printf("您輸入的整數是奇數\n");
    }

    return 0;
}