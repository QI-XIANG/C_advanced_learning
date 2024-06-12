#include <stdio.h>
#include <stdlib.h>

int main(void){
    int rgb[3][4][5] = {{{247, 67, 32, 187, 240},
                         {122, 41, 21, 16, 154},
                         {52, 35, 79, 21, 93},
                         {27, 22, 35, 154, 75}},
                        {{14, 145, 132, 25, 40},
                         {212, 221, 121, 54, 14},
                         {132, 235, 178, 19, 14},
                         {122, 122, 133, 54, 47}},
                        {{17, 44, 32, 127, 240},
                         {22, 231, 21, 156, 124},
                         {32, 35, 78, 21, 194},
                         {127, 22, 33, 54, 45}}};
    //r+30
    for(int i = 0; i <=0 ; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 5; k++){
                rgb[0][j][k] += 30;
                if(rgb[0][j][k] > 255){
                    rgb[0][j][k] = 255;
                }
            }
        }
    }
    //g-30
    for(int i = 1; i <=1 ; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 5; k++){
                rgb[1][j][k] -= 30;
                if(rgb[1][j][k] < 0){
                    rgb[1][j][k] = 0;
                }
            }
        }
    }
    //print result
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 5; k++){
                printf("%d ", rgb[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}