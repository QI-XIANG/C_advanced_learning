#include <stdio.h>
#include <stdlib.h>

int factorial(int);
double power(double, int);
double my_fun(double, int);

int main(void){
    printf("The sum of the first 5 terms of the series is: %f\n", my_fun(0.1, 5));
    printf("The sum of the first 8 terms of the series is: %f\n", my_fun(0.1, 8));
    printf("The sum of the first 8 terms of the series is: %f\n", my_fun(0.2, 8));

    int num = 2;
    while(1){
        if(my_fun(0.1, num) - my_fun(0.1, num-1) < 0.00001){
            printf("\n\nThe smallest value of n for which the difference between the sum of the first n terms and the sum of the first n-1 terms is less than 0.00001 is: %d", num);
            break;
        }
        num++;
    }
}

double my_fun(double x, int n){
    double sum = 0.0;
    for(int i = 1; i <= n; i++){
        sum += (double) power(x, i)/factorial(i);
    }
    return sum;
}

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

double power(double base, int exp){
    double result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}