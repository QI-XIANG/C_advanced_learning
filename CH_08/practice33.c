#include <stdio.h>
#include <stdlib.h>

#define AVERGE(x, y) ((x + y) / 2)

int main(void){
    printf("AVERGE(%.1f, %.1f) = %.2f", 12.6, 4.2, AVERGE(12.6, 4.2));
    return 0;
}