#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void){
    printf("sum(10) = %d", sum(10));
}

int sum(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else {
        return n + sum(n-1);
    }
}