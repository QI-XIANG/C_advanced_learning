#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("請輸入1~4之間的數字 : ");
    scanf("%d", &num);
    start:
        if(num < 1 || num > 4){
            printf("請輸入1~4之間的數字 : ");
            scanf("%d", &num);
            goto start;
        }
    switch(num){
        case 1:
            printf("春天\n");
            break;
        case 2:
            printf("夏天\n");
            break;
        case 3:
            printf("秋天\n");
            break;
        case 4:
            printf("冬天\n");
            break;
    }
    return 0;
}