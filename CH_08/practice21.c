#include <stdio.h>
#include <stdlib.h>

int sum2(int);

int main(void){
    printf("sum2(10) = %d", sum2(5));
}

int sum2(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 2;
    }else {
        return 2*n + sum2(n-1);
    }
}