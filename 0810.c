#include <stdio.h>

int max(int *n1, int *n2)
{
    if (*n1 > *n2 || *n1 == *n2)
    {
        return ++*n1;
    }
    else
    {
        return ++*n2;
    }
}
void main(int argc, char *argv[])
{
    int a = 100;
    int b = 200;
    int result;
    result = max(&a, &b);

    printf("%d\n", argc);

    printf("%s\n", argv[1]);

    printf("%d\n", result);
    printf("%d\n", a);
    printf("%d\n", b);

    while (1)
        ;
}
