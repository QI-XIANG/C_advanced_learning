#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int find_k(int);
int is_prime(int);
double Euler(int);

int main(void){
    printf("Euler(10) = %f\n", Euler(10));
    printf("Euler(100) = %f\n", Euler(100));
    printf("Euler(1000) = %f\n", Euler(1000));
    printf("Euler(10000) = %f\n", Euler(10000));
}

double Euler(int n){
    double sum = 1.0;
    for(int i = 1; i <= n; i++){
        if(is_prime(i)){
            sum *= (double) i/find_k(i);
        }
    }
    return 2*sum;
}

int is_prime(int n){
    if(n == 1 || n == 2){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int find_k(int n){
    int k;
    bool flag = true;
    if(n == 3){
        flag = false;
        return 2;
    }
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