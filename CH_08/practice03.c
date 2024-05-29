#include <stdio.h>
#include <stdlib.h>

int cub(int x);

int main(void){
    int x = 2;
    printf("%d 的立方是 %d", x, cub(x));
}

int cub(int x){
    return x * x * x;
}