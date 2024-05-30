#include <stdio.h>
#include <stdlib.h>

int rsum(int);

int main(void){
    printf("rsum(10) = %d", rsum(10));
}

int rsum(int n){
    if(n == 1) {
        return 1 * 2;
    } else {
        return n * (n + 1) + rsum(n - 1);
    }
}