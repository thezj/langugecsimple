#include <stdio.h>

void func1(void);

static int count = 10;

void main()
{

    while (count--)
    {
        func1();
    }

    while(1);
}

void func1(void)
{
    static int thingy = 5;

    thingy++;

    printf("thingy is %d,count id %d \n",thingy,count);


}