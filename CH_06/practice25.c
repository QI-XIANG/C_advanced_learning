#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int year = 1900;
start:
    if (year <= 2000)
    {

        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            printf("%d年為閏年\n", year);
        }
        else if (year % 4000 == 0)
        {
            printf("%d年不為閏年\n", year);
        }
        else
        {
            printf("%d年不為閏年\n", year);
        }

        year++;
        goto start;
    }
}