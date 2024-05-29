#include <stdio.h>
#include <stdlib.h>

double f(double x);

int main(void){
    printf("f(-3.2) = %.2f\n", f(-3.2));
    printf("f(-2.1) = %.2f\n", f(-2.1));
    printf("f(0.0) = %.2f\n", f(0.0));
    printf("f(2.1) = %.2f", f(2.1));
}

double f(double x){
    return (double) 3*x*x*x + 2*x - 1;
}