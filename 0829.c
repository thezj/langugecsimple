#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    char name[100];
    char *description;

    strcpy(name, "zara ali");

    description = malloc(30 * sizeof(char));

    description = realloc(description, 100 * sizeof(char));

    if (description == NULL)
    {
        fprintf(stderr, "error unable to allocate required memory");
    }
    else
    {
        strcpy(description, "zara ali a dps sta dps sta dps sth");
    }

    printf("stderr=%s,description=%s\n", name, description);
    printf("stderr-size=%d,description-size=%d,char-size=%d\n", sizeof(name), sizeof(description), sizeof(char));

    free(description);
    while (1)
        ;
}
