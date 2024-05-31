#include "H:\其他資料\2024_春日大作戰\C_advanced_learning\CH_08\area.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("半徑為1.0的圓面積 = %.2f\n", CIRCLE_AREA(1.0));
    printf("長為5.0，寬為4.6的長方形面積 = %.2f\n", RECTANGLE_AREA(5.0, 4.6));
    printf("底為12.2，高為9.4的三角形面積 = %.2f\n", TRIANGLE_AREA(12.2, 9.4));
    return 0;
}