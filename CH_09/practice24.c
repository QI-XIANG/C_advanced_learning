#include <stdio.h>
#include <stdlib.h>

void lower (char str[]);

int main(void){
    char str [] = "Hello, C language";
    lower(str);
    printf("%s", str);
    return 0;
}

void lower (char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
}