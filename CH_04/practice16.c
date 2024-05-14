#include <stdio.h>
#include <stdlib.h>

int main(void){
    char str1[25];
    char str2[25];
    
    printf("Input a string:");
    
    scanf("%s", &str1);
    
    printf("Input another string:");

    fflush(stdin); // clear the buffer

    scanf("%s\0%s\0", &str2);
    
    printf("The string is %s\n", str1);
    printf("%s", str2);
    //system("pause");
    return 0;
}
