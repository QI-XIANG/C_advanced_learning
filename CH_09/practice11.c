#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

int main(void){
    int i,j;
    int A[ROW][COL] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, -1}};
    int min = A[0][0];
    int min_index_i = 0, min_index_j = 0;
    
    for(i = 0; i < ROW; i++){
        for(j = 0; j < COL; j++){
            if(A[i][j] < min){
                min = A[i][j];
                min_index_i = i;
                min_index_j = j;
            }
        }
    }
    printf("The minimum value in the matrix is %d and it is at index (%d, %d)", min, min_index_i, min_index_j);
}