#include <stdio.h>
#include <string.h>
 
union Data
{
   int i;
   float f;
   char  str[20];
};
 
int main( )
{
   union Data data;        
 
   data.i = 10;
   data.f = 220.5;

   printf( "data.i : %d data.f : %f", data.i,data.f);
   
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);
 

    while (1);

   return 0;
}