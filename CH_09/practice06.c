#include <stdio.h>
#include <stdlib.h>

int main(void){
    float arr [5];
    for(int i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%f", &arr[i]);
    }
    float sum = 0;
    float average;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("The average of the numbers is %f\n", sum/5);
}