#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("請輸入字串: ");
    char str [100];
    scanf("%s", str);
    int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        switch(str[i]){
            case 'a':
            case 'A':
                a_count++;
                break;
            case 'e':
            case 'E':
                e_count++;
                break;
            case 'i':
            case 'I':
                i_count++;
                break;
            case 'o':
            case 'O':
                o_count++;
                break;
            case 'u':
            case 'U':
                u_count++;
                break;
        }
    }
    
    printf("a: %d\n", a_count);
    printf("e: %d\n", e_count);
    printf("i: %d\n", i_count);
    printf("o: %d\n", o_count);
    printf("u: %d\n", u_count);
    
    return 0;
}