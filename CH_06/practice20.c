#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("請輸入一個數字(介於1~4) : ");
    scanf("%d", &num);
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