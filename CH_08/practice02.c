#include <stdio.h>
#include <stdlib.h>

void kitty(int k);

int main(void){
    int k;
    printf("請問要印幾次 Hello Kitty: ");
    scanf("%d", &k);
    kitty(k);
}

void kitty(int k){
    for(int i = 0; i < k; i++){
        printf("\"Hello Kitty\"\n");
    }
}