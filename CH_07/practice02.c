#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    for(int i = 41; i <= 64 ; i++){
        ch = i;
        printf("ASCII %d = %c\n", i, ch);
    }
}