#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    int sum = 0;
    
    do{
        printf("請輸入一個偶數: ");
        scanf("%d", &num);
    }while(num %2 != 0);
    
    for(int i = 2; i <= num; i += 2){
        sum += i;
    }
    printf("所有到%d為止偶數的和 = %d\n", num, sum);
}