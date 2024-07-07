#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 3

int main(void){
    int A[ROW][COL] = {{1, 2, 3}, {5, 6, 8}};
    int B[ROW][COL] = {{3, 0, 2}, {3, 5, 7}};
    //add two matrices by using double pointers
    int **ptr1, **ptr2;
    ptr1 = (int **)malloc(ROW * sizeof(int *));
    ptr2 = (int **)malloc(ROW * sizeof(int *));
    for(int i = 0; i < ROW; i++){
        ptr1[i] = (int *)malloc(COL * sizeof(int));
        ptr2[i] = (int *)malloc(COL * sizeof(int));
    }
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            ptr1[i][j] = A[i][j];
            ptr2[i][j] = B[i][j];
        }
    }
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("%d ", ptr1[i][j] + ptr2[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < ROW; i++){
        free(ptr1[i]);
        free(ptr2[i]);
    }
    free(ptr1);
    free(ptr2);
    
    return 0;
}