#include <stdio.h>
#include <stdlib.h>

int length(char str[]);

int main(void){
    char str [] = "Hello, C language";
    printf("字串長度: %d", length(str));
}

int length(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}