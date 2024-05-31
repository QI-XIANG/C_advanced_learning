#include <stdio.h>
#include <stdlib.h>

#define CUBIC(x) (x * x * x)

int main(void){
    printf("CUBIC(%d) = %d\n", 5, CUBIC(5));
    printf("CUBIC(%.1f) = %.4f\n", 2.4, CUBIC(2.4));
    return 0;
}