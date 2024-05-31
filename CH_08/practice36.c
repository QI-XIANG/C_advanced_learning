#include <stdio.h>
#include <stdlib.h>
#include "H:\其他資料\2024_春日大作戰\C_advanced_learning\CH_08\my_math.h"

int main(void){
    int num;
    printf("請輸入一個整數：");
    scanf("%d", &num);
    printf("%d的平方 = %d\n", num, SQUARE(num));
    printf("%d的立方 = %d\n", num, CUBIC(num));
    printf("%d的絕對值 = %d\n", num, ABS(num));
    
    float f1, f2;
    printf("請輸入兩個浮點數：");
    scanf("%f %f", &f1, &f2);
    printf("%f與%f的平均值 = %f\n", f1, f2, AVERAGE(f1, f2));
    printf("%f與%f的乘積 = %f\n", f1, f2, PRODUCT(f1, f2));
    
    return 0;
}