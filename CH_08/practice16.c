#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int find_k(int);

int main(void){
    printf("%d", find_k(23));
}

int find_k(int n){
    int k;
    bool flag = true;
    while(flag){
        for(int i = 1; i<=n; i++){
            if((4*i+2)-n == 1 || (4*i+2)-n == -1){
                k = (4*i+2);
                flag = false;
                break;
            }
        }
    }
    return k;
}