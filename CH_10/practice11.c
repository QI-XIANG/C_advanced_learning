#include <stdio.h>
#include <stdlib.h>

void findMin_Max_index(int *ptr);

int main(void){
    int arr[5] = {3, 5, 1, 7, 9};
    int *ptr = arr;
    findMin_Max_index(ptr);
}

void findMin_Max_index(int *ptr){
    int min = *ptr, max = *ptr;
    int min_index = 0, max_index = 0;
    for(int i = 0; i < 5; i++){
        if(*(ptr + i) < min){
            min = *(ptr + i);
            min_index = i;
        }
        if(*(ptr + i) > max){
            max = *(ptr + i);
            max_index = i;
        }
    }
    printf("The minimum number is %d, and its index is %d\n", min, min_index);
    printf("The maximum number is %d, and its index is %d", max, max_index);
}