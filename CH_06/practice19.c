#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 4, b = 6, larger;

    (a > b) ? (larger = a) : (larger = b);
    printf("%d數值較大\n", larger);

    // system("pause");
    return 0;
}