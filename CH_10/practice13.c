#include <stdio.h>
#include <stdlib.h>

int length(char *ptr);

int main(void){
    char *ptr = "Hello World!";
    printf("The length of the string is %d.", length(ptr));
}

int length(char *ptr){
    int count = 0;
    while(*ptr != '\0'){
        count++;
        ptr++;
    }
    return count;
}