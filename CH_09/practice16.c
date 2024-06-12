#include <stdio.h>
#include <stdlib.h>

int min(int arr [], int length);

int main(void){
    int arr [5] = {33, 32, 56, 45, 33};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("The minimum value in the array is %d", min(arr, length));
}

int min(int arr [], int length){
    int min = arr[0];
    for(int i = 0; i < length; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}