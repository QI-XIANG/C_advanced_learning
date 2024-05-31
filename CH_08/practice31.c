#include <stdio.h>
#include <stdlib.h>

#define f(x) 4*x*x + 6*x - 5

int main(void){
    printf("f(%.1f) = %.2f\n", 1.0, f(1.0));
    printf("f(%.1f) = %.2f\n", 2.2, f(2.2));
    printf("f(%.2f) = %.4f\n", 3.14, f(3.14));
    return 0;
}