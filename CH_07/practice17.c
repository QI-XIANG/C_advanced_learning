#include <stdio.h>
#include <stdlib.h>

int main(void){
    int counter = 1;
    int num;
    do{
        printf("請輸入一個整數: ");
        scanf("%d", &num);
        for(int i = 1; i <= num; i++){
            printf("*");
        }
        counter++;
        printf("\n");
    }while(counter <= 3);
    return 0;
}