#include <stdio.h>
#include <stdlib.h>

int main(void){
    char str[10];
    scanf("%s", str);
    printf("\"%s\"\n", str);
    printf("\'%20s\'\n", str);
    printf("\'%-20s\'\n", str);
}