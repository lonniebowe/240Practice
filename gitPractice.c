/*
CS 240 Git Practice File
Add a statement that prints your name in main
*/

void Preston(int);

#include <stdio.h>

int main()
{
   puts("Lonnie Bowe");
   Preston(0);
   return 0;
}

void Preston(int index)
{
   char name[] = "Preston Bennett\n";

   if (name[index] == '\0')
   { return; }

   else
   {
      printf("%c", name[index]);
      Preston(index + 1);
   }
}
