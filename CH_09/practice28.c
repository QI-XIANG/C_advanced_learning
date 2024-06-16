#include <stdio.h>
#include <stdlib.h>

int main(void){
    char arr[][11] = {"C language", "C++", "Java"};
    printf("sizeof(arr): %d\n", sizeof(arr));
    for(int i = 0; i<3; i++){
        printf("arr[%d]: %s\n", i, arr[i]);
    }
    for(int i = 0; i <sizeof(arr)/sizeof(arr[0]); i++){
        printf("arr[%d]: %s\n", i, arr[i]);
    }
    return 0;
}