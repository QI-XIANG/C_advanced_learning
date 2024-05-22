#include <stdio.h>
#include <stdlib.h>

int main(void){
    int height, weight;
    printf("請輸入您的身高(cm) : ");
    scanf("%d", &height);
    printf("請輸入您的體重(kg) : ");
    scanf("%d", &weight);
    
    (weight >= 90 && height < 180) ? printf("您的體重過重\n") : printf("您的體重不會過重\n");

    return 0;
}