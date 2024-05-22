#include <stdio.h>
#include <stdlib.h>

int main(void){
    int month;
    printf("請輸入月份 : ");
    scanf("%d", &month);
    if(month >= 3 && month <= 5){
        printf("春季\n");
    }else if(month >= 6 && month <= 8){
        printf("夏季\n");
    }else if(month >= 9 && month <= 11){
        printf("秋季\n");
    }else if(month == 12 || month == 1 || month == 2){
        printf("冬季\n");
    }

    return 0;
}