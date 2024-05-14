#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    char ch;
    printf("請輸入一個字元:");
    ch = getch();
    
    printf("    您輸入的字元是:");
    putchar(ch);

    
    printf("\n");

    printf("請輸入一個字元:");
    ch = getch();
    
    printf("    您輸入的字元是:");
    putchar(ch);

    //system("pause");
    return 0;
}