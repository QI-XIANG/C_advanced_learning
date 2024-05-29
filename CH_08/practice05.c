#include <stdio.h>
#include <stdlib.h>

int mod(int x, int y);

int main(void){
    int x = 17, y = 5;
    printf("%d 除以 %d 的餘數是 %d", x, y, mod(x, y));
}

int mod(int x, int y){
    return x % y;
}