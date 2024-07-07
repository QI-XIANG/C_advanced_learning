#include <stdio.h>
#include <stdlib.h>

void display(char *ptr, int n);

int main(void){
    char str[] = "Hello World!";
    display(str, 5);
}

void display(char *ptr, int n){
    //from n to the end of the string
    for(int i = n; i < 12; i++){
        printf("%c", *(ptr + i));
    }
}