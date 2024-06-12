#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

double average(int arr[][COL], int row);

int main(void){
    int arr[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("The average of the elements in the 2D array is %.2f", average(arr, ROW));
    return 0;
}

double average(int arr[][COL], int row){
    double sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < COL; j++){
            sum += arr[i][j];
        }
    }
    return sum/(row*COL);
}