#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0;

    for (int num = 1; num <= 1000; num++)
    {
        sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        if (sum == num)
        {
            printf("%d 是一個完美數字\n", num);
        }
        else
        {
            //printf("%d 不是一個完美數字\n", num);
        }
    }
}