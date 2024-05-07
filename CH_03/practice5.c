#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("578 : %d bytes\n", sizeof(578));
    printf("784000000 : %d bytes\n", sizeof(784000000));
    printf("6.78f : %d bytes\n", sizeof(6.78f));
    printf("718.26 : %d bytes\n", sizeof(718.26));
    printf("6.42e127 : %d bytes\n", sizeof(6.42e127));
    return 0;
}