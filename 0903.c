#include <stdio.h>

void main(int paramx, char *params[])
{
    if (paramx == 2)
    {
        // argv[0] 存储程序的名称，argv[1] 是一个指向第一个命令行参数的指针
        printf("params supply id %s", params[1]);
    }
    while(1);
}