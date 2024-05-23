#include <stdio.h>
#include <stdlib.h>

int main(void){
    double length = 3000;
    int day = 0;
    while(length >= 5){
        length /= 2;
        day++;
    }
    printf("經過 %d 天，長度為%.2f公尺", day, length);
}
    
