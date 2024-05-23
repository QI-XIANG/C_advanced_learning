#include <stdio.h>
#include <stdlib.h>

int main(void){
    int put;
    int cnt = 0;
    int password = 6128;

    for(cnt = 0; cnt < 3; cnt++){
        printf("請輸入密碼: ");
        scanf("%d", &put);
        if(put == password){
            printf("密碼輸入正確，歡迎使用本系統!!\n");
            break;
        }
        if(cnt == 2){
            printf("密碼輸入超過三次!!\n");
            break;
        }
    }
    return 0;
}