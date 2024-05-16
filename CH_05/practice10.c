#include <stdio.h>
#include <stdlib.h>

int main(void){
    float width, height;
    printf("請輸入平行四邊形的寬： ");
    scanf("%f", &width);
    printf("請輸入平行四邊形的高： ");
    scanf("%f", &height);
    printf("平行四邊形的面積為： %.2f", width*height);
}