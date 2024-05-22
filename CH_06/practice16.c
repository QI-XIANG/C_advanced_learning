#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int a, b, c;
    printf("請輸入三個係數 : ");
    scanf("%d %d %d", &a, &b, &c);
    if(b*b-4*a*c > 0){
        printf("有兩個不相等的實根\n");
        printf("x1 = %.2f\n", (-b+sqrt(b*b-4*a*c))/(2*a));
        printf("x2 = %.2f\n", (-b-sqrt(b*b-4*a*c))/(2*a));
    }else if(b*b-4*a*c == 0){
        printf("有兩個相等的實根\n");
        printf("x1 = x2 = %.2f\n", -b/(2*a));
    }else{
        printf("沒有實根\n");
    }

    return 0;
}