#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("請輸入一個數字: ");
    scanf("%d", &num);
    if(num == 1){
        printf("沒有小於此數字的最大質數!!\n");
    }
    if(num == 2){
        printf("沒有小於此數字的最大質數!!\n");
    }
    if(num >= 3){
        for(int i = num - 1; i > 1; i--){
            int cnt = 0;
            for(int j = 1; j <= i; j++){
                if(i % j == 0){
                    cnt++;
                }
                if(cnt > 2){
                    break;
                }
            }
            if(cnt == 2){
                printf("小於此數字的最大質數是: %d\n", i);
                break;
            }
        }
    }
    return 0;
}