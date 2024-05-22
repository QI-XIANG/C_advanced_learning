#include <stdio.h>
#include <stdlib.h>

int main(void){
    double x, y;
    printf("請輸入x座標 : ");
    scanf("%lf", &x);
    printf("請輸入y座標 : ");
    scanf("%lf", &y);
    if(x > 0 && y > 0){
        printf("該點位於第一象限\n");
    }else if(x < 0 && y > 0){
        printf("該點位於第二象限\n");
    }else if(x < 0 && y < 0){
        printf("該點位於第三象限\n");
    }else if(x > 0 && y < 0){
        printf("該點位於第四象限\n");
    }else if(x == 0 && y == 0){
        printf("該點位於原點\n");
    }else if(x == 0 && y != 0){
        printf("該點位於y軸上\n");
    }else if(x != 0 && y == 0){
        printf("該點位於x軸上\n");
    }

    return 0;
}