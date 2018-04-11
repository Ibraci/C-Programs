// C Program to extract a subtring in a given without using string functions

#include <stdio.h>
#include <stdlib.h>

char* substring(char*, int, int);

int main()
{
   char string[100], *pointer;
   int position, length;

   printf("Input a string: ");
   scanf("%s", string);
   printf("Enter the position of substring: ");
   scanf("%d", &position);
   printf("Enter the length of substring: ");
   scanf("%d", &length);
   pointer = substring( string, position, length);
   printf("Required substring is \"%s\"\n", pointer);
   free(pointer);

   return 0;
}

char *substring(char *string, int position, int length)
{
   char *pointer;
   int c;

   pointer = malloc(length+1);

   if (pointer == NULL) {
      printf("Unable to allocate memory.\n");
      exit(1);
   }

   for (c = 0 ; c < length ; c++) {
      *(pointer+c) = *(string+position-1);
      string++;
   }

   *(pointer+c) = '\0';

   return pointer;
}
