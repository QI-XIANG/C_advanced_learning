#include <stdio.h>
#include <stdlib.h>

void reverse(char str[]);

int main(void){
    char str [] = "Hello, C language";
    reverse(str);
    return 0;
}

void reverse(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    for(int i = len - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
}