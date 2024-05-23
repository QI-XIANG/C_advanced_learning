#include <stdio.h>
#include <stdlib.h>

int main(void){
    int put;
    int cnt = 0;
    int password = 6128;

    while(1){
        printf("請輸入密碼: ");
        scanf("%d", &put);
        cnt++;
        if(put == password){
            printf("密碼輸入正確，歡迎使用本系統!!\n");
            break;
        }
        if(cnt == 3){
            printf("密碼輸入超過三次!!\n");
            break;
        }
    }
    return 0;
}