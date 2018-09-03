#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int id;
};

void printfbook(struct Books *book);

void printfbook(struct Books *book)
{
    printf("book introduce: ------------%s---------,%s,%s,%d", book->title, book->author, book->subject, book->id);
};

void main()
{

    struct Books book1;

    strcpy(book1.title, "bookaaa");
    strcpy(book1.author, "11xxbookaaa");
    strcpy(book1.subject, "1bookaaa");
    book1.id = 1;

    printfbook(&book1);
    while (1)
        ;
}
