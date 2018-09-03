#include <stdio.h>

void main()
{

    while (1)
    {
        int num;

        printf("type a number: ");
        scanf("%d", &num);//&表示内存地址 就是把输入的一个数字“%d”，放到num变量的内存地址
        printf("address of memory:0x%x\n",&num);
        (num % 2 == 0) ? printf("even\n") : printf("odd\n");
    };
}