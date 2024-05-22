#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    printf("請輸入一個字元 : ");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a':
        case 'A':
            printf("您輸入A\n");
            break;
        case 'b':
        case 'B':
            printf("您輸入B\n");
            break;
        default:
            printf("您輸入的不是A或B\n");
            break;
    }

    return 0;
}