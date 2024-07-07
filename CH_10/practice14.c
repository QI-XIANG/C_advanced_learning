#include <stdio.h>
#include <stdlib.h>

void calTotalBytes(char *ptr);

int main(void){
    int i;
    char *ptr[3] = {"Tom", "Lily", "James Lee"};
    for(int i = 0; i < 3; i++){
        printf("address of ptr[%d] = %p\n", i, ptr[i]);
        printf("ptr[%d] = %s\n", i, ptr[i]);
    }
    calTotalBytes(ptr[0]);
    return 0;
}

void calTotalBytes(char *ptr){
    int i = 0;
    //calculate total bytes for char *ptr[3] = {"Tom", "Lily", "James Lee"};
    while(*(ptr + i) != '\0'){
        i++;
    }
    printf("Total bytes for char *ptr[3] = {\"Tom\", \"Lily\", \"James Lee\"} = %d\n", i);
}