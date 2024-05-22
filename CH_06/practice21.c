#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    printf("請輸入一個字元 : ");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a':
            printf("您輸入a\n");
            break;
        case 'b':
            printf("您輸入b\n");
            break;
        default:
            printf("您輸入的不是a或b\n");
            break;
    }

    return 0;
}