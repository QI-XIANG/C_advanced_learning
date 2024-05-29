#include <stdio.h>
#include <stdlib.h>

int is_prime(int);

int main(void){
    int i;
    for(int i=1; i<=30; i++){
        if(is_prime(i)){
            printf("%3d ", i);
        }
    }
    printf("\n");
    return 0;
}

int is_prime(int num){
    if(num == 1){
        return 0;
    
    }
    for(int i=2; i<=num-1; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}