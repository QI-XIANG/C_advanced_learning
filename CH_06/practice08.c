#include <stdio.h>
#include <stdlib.h>

int main(void){
    int line_1, line_2, line_3;
    printf("請輸入三條邊長 : ");
    scanf("%d %d %d", &line_1, &line_2, &line_3);
    if(line_1 + line_2 > line_3 && line_1 + line_3 > line_2 && line_2 + line_3 > line_1){
        printf("這三條邊可以組成一個三角形\n");
        if((line_1*line_1+line_2*line_2) == line_3*line_3 || (line_1*line_1+line_3*line_3) == line_2*line_2 || (line_2*line_2+line_3*line_3) == line_1*line_1){
            printf("這是一個直角三角形\n");
        }else if((line_1*line_1+line_2*line_2) < line_3*line_3 || (line_1*line_1+line_3*line_3) < line_2*line_2 || (line_2*line_2+line_3*line_3) < line_1*line_1){
            printf("這是一個鈍角三角形\n");
        }else if((line_1*line_1+line_2*line_2) > line_3*line_3 || (line_1*line_1+line_3*line_3) > line_2*line_2 || (line_2*line_2+line_3*line_3) > line_1*line_1){
            printf("這是一個銳角三角形\n");
        }
    }else{
        printf("這三條邊無法組成一個三角形\n");
    }
}