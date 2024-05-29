#include <stdio.h>
#include <stdlib.h>

int power(int x, int n);

int main(void){
    int x = 5, n = 3;
    printf("%d 的 %d 次方是 %d", x, n, power(x, n));
    return 0;
}

int power(int x, int n){
    int result = 1;
    for(int i = 0; i < n; i++){
        result *= x;
    }
    return result;
}