#include <stdio.h>

int g = 22;

void main()
{
    int a, b, c;

    a = 10;
    b = 20;
    c = a + b;
    int g = 50;
    g++;

    printf("value of a = %d,b = %d,c = %d,g = %d", a, b, c, g);

    long t = 1000000000;
    while (t > 0)
    {
        t--;
    };
    return;
}