#include <stdio.h>
#include <stdlib.h>

int prime(int x);

int main(void){
    int n;
    printf("請輸入一個整數: ");
    scanf("%d", &n);
    printf("第 %d 個質數是 %d", n, prime(n));
    return 0;
}

//找出第n個質數
int prime(int x){
    int count = 0;
    int num = 2;
    while(count < x){
        int isPrime = 1;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            count++;
        }
        num++;
    }
    return num - 1;
}