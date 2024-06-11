#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

int main(void){
    int i,j;
    int A[ROW][COL] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12}};
    int B[ROW][COL] = {{13, 14, 15, 16},
                       {17, 18, 19, 20},
                       {21, 22, 23, 24}};
    
    printf("Matrix A + B =\n");
    for(i = 0; i < ROW; i++){
        for(j = 0; j < COL; j++){
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    return 0;
}