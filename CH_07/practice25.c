#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num = 1;
    int counter = 4;
    for(int num = 1; num <= 5; num++){
        for(int j = 1; j <= counter; j++){
            printf(" ");
        }
        for(int i = 1; i <= num; i++){
            printf("%d", i);
        }
        counter--;
        printf("\n");
    }
    return 0;
}