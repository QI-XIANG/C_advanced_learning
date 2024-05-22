#include <stdio.h>
#include <stdlib.h>

int main(void){
    int year;
    printf("請輸入年份 : ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("該年為閏年\n");
    }else if(year % 4000 == 0){
        printf("該年不為閏年\n");
    }
    else{
        printf("該年不為閏年\n");
    }

    return 0;
}