#define _USE_MATH_DEFINES // for C
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float radius;
    printf("請輸入圓的半徑： ");
    scanf("%f", &radius);
    printf("圓的周長為： %.2f\n", 2*M_PI*radius);
    printf("圓的面積為： %.2f\n", M_PI*radius*radius);
    printf("圓球的體積為： %.2f\n", 4.0/3*M_PI*radius*radius*radius);
}