#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int money, price, charge;
    printf("請輸入應付金額 : ");
    scanf("%d", &price);
    printf("請輸入實付金額 : ");
    scanf("%d", &money);
    if (money < price)
    {
        printf("金額不足\n");
    }
    else
    {
        printf("找零 %d 元\n", money - price);
        charge = money - price;
        while (charge > 0)
        {
            if (charge > 1000)
            {
                printf("找零 1000 元 : %d 張\n", charge / 1000);
                charge %= 1000;
            }
            else if (charge > 500)
            {
                printf("找零 500 元 : %d 張\n", charge / 500);
                charge %= 500;
            }
            else if (charge > 100)
            {
                printf("找零 100 元 : %d 張\n", charge / 100);
                charge %= 100;
            }
            else if (charge > 50)
            {
                printf("找零 50 元 : %d 張\n", charge / 50);
                charge %= 50;
            }
            else if (charge > 10)
            {
                printf("找零 10 元 : %d 個\n", charge / 10);
                charge %= 10;
            }
            else if (charge > 5)
            {
                printf("找零 5 元 : %d 個\n", charge / 5);
                charge %= 5;
            }
            else if (charge > 1)
            {
                printf("找零 1 元 : %d 個\n", charge / 1);
                charge %= 1;
            }
        }

        return 0;
    }
}