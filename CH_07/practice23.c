#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num = 1;
    for(int num = 1; num <= 5; num++){
        for(int i = 1; i <= num; i++){
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}