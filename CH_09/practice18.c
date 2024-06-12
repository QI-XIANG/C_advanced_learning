#include <stdio.h>
#include <stdlib.h>

void square(int arr[], int length);

int main(void){
    int arr [5] = {33, 32, 56, 45, 33};
    int length = sizeof(arr)/sizeof(arr[0]);
    square(arr, length);
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}

void square(int arr[], int length){
    for(int i = 0; i < length; i++){
        arr[i] = arr[i] * arr[i];
    }
}