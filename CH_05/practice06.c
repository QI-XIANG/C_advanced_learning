#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("請輸入攝氏溫度: ");
    int celsius;
    scanf("%d", &celsius);
    float fahrenheit = (float) celsius*9/5+32;
    printf("華氏溫度為: %.2f", fahrenheit);
}