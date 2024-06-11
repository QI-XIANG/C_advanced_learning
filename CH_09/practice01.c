#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr [5];
    for(int i = 1; i <= 5; i++){
        arr[i-1] = i;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
}