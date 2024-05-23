#include <stdio.h>
#include <stdlib.h>

int main(void){
    int counter = 1;
    do{
        for(int i = 1; i <= 9; i++){
            printf("%d * %d = %d\t", counter, i, counter * i);
        }
        printf("\n");
        counter++;
    }while(counter <= 9);
}