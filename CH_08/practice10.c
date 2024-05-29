#include <stdio.h>
#include <stdlib.h>

int is_special_prime(int);
int is_prime(int);
int power(int, int);

int main(void){
    printf("The first 8 Mersenne primes are: ");
    for(int i = 1; i <= 8; i++){
        printf("%d ", is_special_prime(i));
    }
}

int is_special_prime(int n){
    //find the nth Mersenne primes
    int i = 1;
    while(1){
        if(is_prime(power(2, i) - 1)){
            if(n == 1){
                return power(2, i) - 1;
            }
            n--;
        }
        i++;
    }
}

int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
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