#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    char ch;
    printf("請輸入一個字元 : ");
    scanf("%c", &ch);
    if(isdigit(ch)){
        printf("輸入的字元是數字\n");
    }else if(ch >= 'A' && ch <= 'Z'){
        printf("輸入的字元是英文字母\n");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("輸入的字元是英文字母\n");
    }//判斷書入的字元是數字還是英文字母
    
    return 0;
}