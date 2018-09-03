#include <stdio.h>
#include <string.h>

void main()
{

    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    

    strcpy(str3,str1);
    strcat(str1,str2);
    
    int len = strlen(str1);

    printf("str1:%s,str2:%s,str3:%s,str1len:%d",str1,str2,str3,len);

    long t = 2000000000;
    while (t > 0)
    {
        t--;
    };
    return;
}
