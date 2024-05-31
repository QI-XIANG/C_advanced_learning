#include <stdio.h>
#include <stdlib.h>

void counter(void);

int count = 0;

int main(void){
    counter();
    counter();
    //system("pause");
    return 0;
}

void counter(void){
    count++;
    printf("counter()已經被呼叫%d次了...\n", count);
}