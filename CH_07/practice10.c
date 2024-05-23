#include <stdio.h>
#include <stdlib.h>

int main(void){
    //armstrong number
    int num, sum = 0, temp, remainder, digits = 0;
    printf("請輸入一個數字：");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        digits++;
        temp /= 10;
    }
    temp = num;
    while(temp != 0){
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if(sum == num){
        printf("%d 是一個阿姆斯壯數字\n", num);
    }else{
        printf("%d 不是一個阿姆斯壯數字\n", num);
    }
}