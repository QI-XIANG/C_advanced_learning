#include <stdio.h>
#include <stdlib.h>

int main(void){
    int time;
    printf("請輸入工作時數 : ");
    scanf("%d", &time);
    double sum = 0;
    if(time <= 60){
        sum += time * 75;
    }else if(time >= 61 && time <= 75){
        sum += 60 * 75 + (time - 60) * 75 * 1.25;
    }else if(time >= 76){
        sum += 60 * 75 +  15 * 75 * 1.25 +  (time - 75) * 75 * 1.75;
    }

    printf("總薪資為 : %.2f\n", sum);
    return 0;
}