#include <stdio.h>
#include <stdlib.h>



int main(void){
    int num[] = {14, 23, 32, 62, 19};
    int *p1, *p2;
    p1 = p2 = num;

    *p1++; //移動指標到下一個元素
    printf("*p1 = %d\n", *p1);

    (*p2)++; //將指標指向的元素加一
    printf("*p2 = %d\n", *p2);

    return 0;
}