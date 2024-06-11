#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr [3];
    for(int i = 0; i<3; i++){
        printf("Enter the value of element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("%d ", arr[i]);
    }
}