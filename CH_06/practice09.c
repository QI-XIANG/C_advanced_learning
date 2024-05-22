#include <stdio.h>
#include <stdlib.h>

int main(void){
    int scores [10];
    int c_a = 0, c_b = 0, c_c = 0;
    for(int i = 0; i < 10; i++){
        printf("請輸入第 %d 位學生的成績 : ", i+1);
        scanf("%d", &scores[i]);
        if(scores[i] >= 76){
            c_a++;
        }else if(scores[i] >= 60 && scores[i] <= 75){
            c_b++;
        }else{
            c_c++;
        }
    }
    printf("A 級有 %d 位\n", c_a);
    printf("B 級有 %d 位\n", c_b);
    printf("C 級有 %d 位\n", c_c);
    
    return 0;
}