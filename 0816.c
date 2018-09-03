#include <stdio.h>

void main()
{
    /**
     * 
     * 指针是一个变量，
     * 其值为另一个变量的地址,内存位置的直接地址，
     * 
    */
    int var1 = 10;
    int *ip;

    /* 在指针变量中存储 var 的地址 */
    ip = &var1;

    char var2[10];

    printf("var1:%p\n", &var1); //var1:0061FF24
    /* 在指针变量中存储的地址 */
    printf("ip:%p\n", ip); //ip:0061FF24
    /* 使用指针访问值 */
    printf("*ip:%d\n", *ip); //*ip:10
    printf("var2:%p\n", &var2);

    long t = 2000000000;
    while (t > 0)
    {
        t--;
    };
    return;
}