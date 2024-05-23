#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    while(ch != 17 || ch != 3){
        ch = getch();
        printf("ASCII of ch = %d\n", ch);
    }

    printf("你按下了 Ctrl + Q 或 Ctrl + C\n");
    return 0;
}