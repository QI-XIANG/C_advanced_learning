#include <stdio.h>
#include <stdlib.h>

void counter(void);
double rpower(double, int);

int main(void){
    printf("rpower(2.0, 9) = %.2f\n", rpower(2.0, 9));
}

double rpower(double x, int n){
    if(n == 0){
        counter();
        return 1;
    } else if(n == 1){
        counter();
        return x;
    } else {
        counter();
        return x*rpower(x, n-1);
    }
}

void counter(void){
    static int count = 0;
    count++;
    printf("counter()已經被呼叫%d次了...\n", count);
}