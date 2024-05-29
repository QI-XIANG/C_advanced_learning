#include <stdio.h>
#include <stdlib.h>

int power(double, int);
int factorial(int);
double my_fun(double,int);

int main(void){
    printf("The sum of the first 3 terms of the series is: %f\n", my_fun(2.2, 3));
    printf("The sum of the first 5 terms of the series is: %f\n", my_fun(2.2, 5));
    int num = 2;
    while(1){
        if(my_fun(2.2, num) - my_fun(2.2, num-1) < 0.00001){
            printf("\n\nThe smallest value of n for which the difference between the sum of the first n terms and the sum of the first n-1 terms is less than 0.00001 is: %d", num);
            break;
        }
        num++;
    }
}

double my_fun(double x, int n){
    double sum = 0.0;
    for(int i = 1; i <= n; i++){
        sum += (double) (power(-1, i)*power(x, 2*i+1))/factorial(2*i+1);
    }
    return sum;
}

int power(double base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}