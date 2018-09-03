#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
    return x > y ? x : y;
}

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = getNextValue();
    }
}

int getNextRandomValue()
{
    return rand();
}

void main()
{

    int a1[10];

    populate_array(a1, 10, getNextRandomValue);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a1[i]);
    }

    int (*p)(int, int) = &max;

    int a, b, c, d;

    printf("type numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    d = p(p(a, b), c);

    printf("max: %d", d);

    long t = 2000000000;
    while (t > 0)
    {
        t--;
    };
    return;
}