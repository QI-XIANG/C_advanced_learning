#include <stdio.h>
#include <stdlib.h>

#define ABS(x) ((x) > 0 ? (x) : -(x))

int main(void){
    printf("ABS(%.1f) = %.1f", -13.6, ABS(-13.6));
    return 0;
}