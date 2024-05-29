#include <stdio.h>
#include <stdlib.h>

double square(double x);

int main(void){
    double x = 4.0;
    printf("%.1f 的平方是 %.1f", x, square(x));
}

double square(double x){
    return x * x;
}