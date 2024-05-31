#include <stdio.h>
#include <stdlib.h>

void counter(void);

int main(void){
    counter();
    counter();
    //system("pause");
    return 0;
}

void counter(void){
    static int count = 0;
    count++;
    printf("counter()已經被呼叫%d次了...\n", count);
}