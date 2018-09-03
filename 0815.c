#include <stdio.h>

enum day
{
    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};

void main()
{

    enum day day2;

    for (day2 = mon; day2 <= sun; day2++)
    {

        printf("%d", day2);
    }

    int a = 1;

    day2 = (enum day)a;

    printf("%d",day2);

    long t = 2000000000;
    while (t > 0)
    {
        t--;
    };
    return;
}