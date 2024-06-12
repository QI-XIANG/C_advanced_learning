#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

void add(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL]);

int main(void){
    int A[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int C[ROW][COL];
    add(A, B, C);

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void add(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}