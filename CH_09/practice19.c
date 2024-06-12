#include <stdio.h>
#include <stdlib.h>

void count(int arr[], int length);

int main(void){
    int arr [5] = {33, 32, 56, 45, 33};
    int length = sizeof(arr)/sizeof(arr[0]);
    count(arr, length);
}

void count(int arr[], int length){
    int even = 0;
    int odd = 0;
    for(int i = 0; i < length; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("The number of even numbers is %d\n", even);
    printf("The number of odd numbers is %d", odd);
}