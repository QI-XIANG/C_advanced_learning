#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    int cnt = 0;
    printf("請輸入一個數字: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cnt++;
        }
        if(cnt > 2){
            printf("此數字不是質數!!\n");
            break;
        }
    }
    if(cnt == 2){
        printf("此數字是質數!!\n");
    }
    return 0;
}