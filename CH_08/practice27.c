#include <stdio.h>
#include <stdlib.h>

int fib(int);
int fib_for(int);
void counter(void);
void counter_for(void);

int main(void){
    int n = 4;
    printf("fib(%d) = %d\n", n, fib(n));
    printf("fib_for(%d) = %d\n", n, fib_for(n));
    return 0;
}

void counter(void){
    static int count = 0;
    count++;
    printf("counter()已經被呼叫%d次了...\n", count);
}

void counter_for(void){
    static int count = 0;
    count++;
    printf("counter_for()已經被呼叫%d次了...\n", count);
}

int fib(int n){
    if(n == 1 || n == 2){
        counter();
        return 1;
    }else{
        counter();
        return fib(n-1) + fib(n-2);
    }
}

int fib_for(int n) {
    if (n == 0) {
        counter_for();
        return 0;
    } else if (n == 1) {
        counter_for();
        return 1;
    } else {
        int first = 0, second = 1, next;
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
            counter_for();
        }
        counter_for();
        return second;
    }
}