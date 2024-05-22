#include <stdio.h>
#include <stdlib.h>

int main(void){
    int weight;
    printf("請輸入您的體重 : ");
    scanf("%d", &weight);
    if(weight >= 90){
        printf("您的體重過重\n");
    }else{
        printf("您的體重不會過重\n");
    }

    return 0;
}