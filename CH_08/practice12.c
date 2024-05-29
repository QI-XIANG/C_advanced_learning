#include <stdio.h>
#include <stdlib.h>

double my_fun(int);
int power(int,int);

int main(void){
    printf("The sum of the first 3 terms of the series is: %.6f\n", my_fun(3));
    printf("The sum of the first 4 terms of the series is: %.6f\n", my_fun(4));
    printf("The sum of the first 5 terms of the series is: %.6f\n", my_fun(5));
    printf("The sum of the first 6 terms of the series is: %.6f", my_fun(6));
    int num = 1;
    while(1){
        if(my_fun(num) > 0.99999){
            printf("\n\nThe smallest value of n for which the sum of the first n terms of the series is greater than 0.99999 is: %d", num);
            break;
        }
        num++;
    }
}

double my_fun(int n){
    double sum = 0.0;
    for(int i = 1; i<=n; i++){
        sum += (double) 1/power(2,i);
    }
    return sum;
}

int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

