#include <stdio.h>
#include <stdlib.h>

void calChar(char *ptr);
void calSmallChar(char *ptr);

int main(void){
    char *ptr = "We are best friends.";
    calChar(ptr);
    calSmallChar(ptr);
}

void calChar(char *ptr){
    int count = 0;
    while(*ptr != '\0'){
        count++;
        ptr++;
    }
    printf("The number of characters in the string is %d.\n", count);
}

void calSmallChar(char *ptr){
    int count = 0;
    while(*ptr != '\0'){
        if(*ptr >= 'a' && *ptr <= 'z'){
            count++;
        }
        ptr++;
    }
    printf("The number of small characters in the string is %d.", count);
}