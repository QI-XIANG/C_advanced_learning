#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 3

//use double pointers to find max and min values in a 2D array
void findMax_Min(int **ptr);

int main(void){
    int a[ROW][COL] = {{26, 5, 7}, {10, 3, 47}, {6, 76, 8}, {40, 4, 32}};
    int **ptr;
    ptr = (int **)malloc(ROW * sizeof(int *));
    for(int i = 0; i < ROW; i++){
        ptr[i] = (int *)malloc(COL * sizeof(int));
    }
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            ptr[i][j] = a[i][j];
        }
    }
    findMax_Min(ptr);

    return 0;
}

void findMax_Min(int **ptr){
    int max = ptr[0][0], min = ptr[0][0];
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(ptr[i][j] > max){
                max = ptr[i][j];
            }
            if(ptr[i][j] < min){
                min = ptr[i][j];
            }
        }
    }
    printf("The maximum value is %d\n", max);
    printf("The minimum value is %d", min);
    for(int i = 0; i < ROW; i++){
        free(ptr[i]);
    }
    free(ptr);
}