#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,sale[2][4],sum=0;
    int sum_person[2] = {0, 0};
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("業務員%d的第%d季業績: ", i+1, j+1);
            scanf("%d", &sale[i][j]);
        }
    }

    printf("***Output***\n");
    for(i = 0; i < 2 ; i++){
        printf("業務員%d的業績分別為", i+1);
        for(j = 0; j < 4; j++){
            printf(" %d ", sale[i][j]);
            sum += sale[i][j];
            sum_person[i] += sale[i][j];
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++){
        printf("業務員%d的總銷售量為%d部車\n", i+1, sum_person[i]);
    }

    return 0;
}