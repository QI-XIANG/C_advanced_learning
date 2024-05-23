#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    int sum = 0;
    int i = 1;
    printf("請輸入一個數字：");
    scanf("%d", &num);
    while(i <= num){
        if(i%2 == 0){
            sum += i;
        }
        i++;
    }
    printf("1 到 %d 之間的偶數和為 %d\n", num, sum);
    return 0;
}