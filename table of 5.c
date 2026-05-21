#include <stdio.h>

int main()
{
    int i, a;

    for(i = 1; i <= 10; i++)
    {
        a = 5 * i;
        printf("\n5x%d=%d", i, a);
    }

    return 0;
}
