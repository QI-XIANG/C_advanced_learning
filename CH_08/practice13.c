#include <stdio.h>
#include <stdlib.h>

int factorial(int);
double my_fun(int);

int main(void){
    printf("The sum of the first 5 terms of the series is: %.6f\n", my_fun(5));
    printf("The sum of the first 8 terms of the series is: %.6f\n", my_fun(8));
    printf("The sum of the first 10 terms of the series is: %.6f\n", my_fun(10));

    int num = 2;
    while(1){
        if((my_fun(num) - my_fun(num-1)) < 0.00001){
            printf("\n\nThe smallest value of n for which the difference between the sum of the first n terms and the sum of the first n-1 terms is less than 0.00001 is: %d", num);
            break;
        }
        num++;
    }
}

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

double my_fun(int n){
    double sum = 0.0;
    for(int i = 1; i <= n; i++){
        sum += (double) 1/factorial(i);
    }
    return sum;
}