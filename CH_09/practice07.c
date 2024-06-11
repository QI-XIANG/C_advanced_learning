#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr [5] = {2, 3, 1, 7, 9};
    int min,max;
    int min_index, max_index;
    min = max = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
    }
    printf("The minimum value is %d and it is at index %d\n", min, min_index);
    printf("The maximum value is %d and it is at index %d", max, max_index);
    return 0;
}