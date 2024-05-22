#include <stdio.h>
#include <stdlib.h>

int main(void){
    int score;
    printf("清輸入學生的成績 : ");
    scanf("%d", &score);
    if(score >= 80 && score <= 100){
        printf("該學生的成績等級為A\n");
    }else if(score >= 60 && score <= 79){
        printf("該學生的成績等級為B\n");
    }else if(score >= 0 && score <= 59){
        printf("該學生的成績等級為C\n");
    }

    return 0;
}