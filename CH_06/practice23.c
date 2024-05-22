#include <stdio.h>
#include <stdlib.h>

int main(void){
    int day;
    printf("請輸入星期幾(1~7) : ");
    scanf("%d", &day);

    switch(day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("今天要上班\n");
            break;
        case 6:
        case 7:
            printf("今天休息\n");
            break;
    }

    return 0;
}
   
