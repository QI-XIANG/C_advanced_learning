#include <stdio.h>
#include <stdlib.h>

void toLower(char str[]);

int main(void){
    printf("請輸入字串: ");
    char str [100];
    gets(str);
    printf("轉換後的字串: ");
    toLower(str);
}

void toLower(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    puts(str);
}