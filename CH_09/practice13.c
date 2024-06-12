#include <stdio.h>
#include <stdlib.h>

int main(void){
    float arr[3][4] = {{18.2, 17.3, 15.0, 13.4},
                     {23.8, 25.1, 20.6, 17.8},
                     {20.6, 21.5, 18.4, 15.7},};
    
    float average_temp[3] = {0, 0, 0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%.1f ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    float daily_average_temp[4] = {0, 0, 0, 0};

    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 3; i++){
            daily_average_temp[j] += arr[i][j];
        }
        daily_average_temp[j] /= 3;
        printf("Day %d average temperature: %.1f", j+1, daily_average_temp[j]);
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            average_temp[i] += arr[i][j];
        }
        average_temp[i] /= 4;
        printf("Period %d average temperature: %.1f", i+1, average_temp[i]);
        printf("\n");
    }

    printf("\n");

    int max_temp_row_index = 0;
    int max_temp_col_index = 0;
    float max_temp = arr[0][0];
    
    int min_temp_row_index = 0;
    int min_temp_col_index = 0;
    float min_temp = arr[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] > max_temp){
                max_temp = arr[i][j];
                max_temp_row_index = i;
                max_temp_col_index = j;
            }
            if(arr[i][j] < min_temp){
                min_temp = arr[i][j];
                min_temp_row_index = i;
                min_temp_col_index = j;
            }
        }
    }

    printf("The maximum temperature is %.1f and it is at period %d, day %d\n", max_temp, max_temp_row_index+1, max_temp_col_index+1);
    printf("The minimum temperature is %.1f and it is at period %d, day %d\n", min_temp, min_temp_row_index+1, min_temp_col_index+1);
}