#include <stdio.h>

void main()
{

    FILE *fp = NULL;
    char buff[255];

    fp = fopen("text.txt", "w+");

    fprintf(fp, "testing for fprintf...\n");
    fputs("testing for fputs...\n", fp);

    fclose(fp);


     fp = fopen("text.txt", "r");


     printf("fp:%d\n",fp);
    fgets(buff, 255, fp);

    printf("%s", buff);
    fgets(buff, 255, fp);

    printf("%s", buff);
    fclose(fp);

    
    
    while (1)
        ;
}