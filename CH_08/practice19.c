#include <stdio.h>
#include <stdlib.h>

double rpower(double, int);

int main(void){
    printf("rpower(2.0, 3) = %.2f\n", rpower(2.0, 3));
}

double rpower(double x, int n){
    if(n == 0){
        return 1;
    } else if(n == 1){
        return x;
    } else {
        return x*rpower(x, n-1);
    }
}