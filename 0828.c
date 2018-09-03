#include <stdio.h>

double factorial(int i)
{

    if (i == 1)
    {
        return 1;
    }
    else
    {
        return i * factorial(i - 1);
    }
}

void main()
{

    printf("%f", factorial(4));
    while (1)
        ;
}