#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr [3][5] =  {{33, 32, 56, 45, 33},
                        {77, 33, 68, 45, 23},
                        {43, 55, 43, 67, 65}};
    int sales_person_sum [3] = {0, 0, 0};
    int products_sum [5] = {0, 0, 0, 0, 0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            sales_person_sum[i] += arr[i][j];
            products_sum[j] += arr[i][j];
        }
    }
    
    int sales_person_sum_max = sales_person_sum[0];
    int sales_person_max_index = 0;
    for(int i = 0; i < 3; i++){
        printf("The total sales of sales person %d is %d", i+1, sales_person_sum[i]);
        if(sales_person_sum[i] > sales_person_sum_max){
            sales_person_sum_max = sales_person_sum[i];
            sales_person_max_index = i;
        }
        printf("\n");
    }
    printf("The sales person with the highest sales is %d\n", sales_person_max_index+1);
    printf("The sales person with the highest sales is %d\n", sales_person_sum_max);

    printf("\n");

    int products_sum_max = products_sum[0];
    int product_max_index = 0;
    for(int i = 0; i < 5; i++){
        printf("The total sales of product %d is %d", i+1, products_sum[i]);
        if(products_sum[i] > products_sum_max){
            products_sum_max = products_sum[i];
            product_max_index = i;
        }
        printf("\n");
    }
    printf("The product with the highest sales is %d\n", product_max_index+1);
    printf("The product with the highest sales is %d\n", products_sum_max);
}