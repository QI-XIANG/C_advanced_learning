#include <stdio.h>
#include <stdlib.h>

void counter(void);
int fid(int);

int main(void){
    
    int n = 5;
    printf("fid(%d) = %d\n", n, fid(n));
    
    //system("pause");
    return 0;
}

int fid(int n){
    if(n == 1 || n == 2){
        counter();
        return 1;
    }else{
        counter();
        return fid(n-1) + fid(n-2);
    }
}

void counter(void){
    static int count = 0;
    count++;
    printf("counter()已經被呼叫%d次了...\n", count);
}

