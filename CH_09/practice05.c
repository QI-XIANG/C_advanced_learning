#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[] = {3, 5, 0, 3, 2, 4, 1, 6, 8, 5, 4, 3, 2};
    int count = sizeof(array)/sizeof(array[0]);
    printf("The number of the array elements is %d\n", sizeof(array)/sizeof(array[0]));
    for(int i = 0; i < count; i++){
        if(array[i] >= 3 & array[i] <= 6){
            printf("%d ", array[i]);
        }
    }
    return 0;
}