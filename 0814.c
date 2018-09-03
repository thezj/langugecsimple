#include <stdio.h>

void main()
{
    int n[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }

    for (j = 0; j < 10; j++)
    {
        printf("n[%d] = %d\n", j, n[j]);
    }

    long t = 2000000000;
    while (t > 0)
    {
        t--;
    };
    return;
}