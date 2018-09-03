#include <stdio.h>

int count;

extern void write_extern();

void main(){
    count = 5;
    count++;
    --count;
    write_extern();

    while(1);
}