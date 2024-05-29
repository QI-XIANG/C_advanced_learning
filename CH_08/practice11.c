#include <stdio.h>
#include <stdlib.h>

int find(int);

int main(void){
    find(12);
}

int find(int n){
    int counter = 0;
    int num = 1;
    while(1){
        if(num % 3 == 2 && num % 5 == 3 && num % 7 == 2){
            printf("%d ", num);
            counter++;
        }
        if(counter == n){
            break;
        }
        num++;
    }
}