#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("請輸入一個整數 : ");
    scanf("%d", &num);

    if(num>0){
        printf("您輸入的整數是正數\n");
    }else if(num<0){
        printf("您輸入的整數是負數\n");
    }else if(num == 0){
        printf("您輸入的整數是零\n");
    }

    printf("程式結束\n");
    //system("pause");
    return 0;
}