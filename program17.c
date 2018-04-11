// C program to sort a list of elements using selection sort algorithm

#include <stdio.h>

int main()
{
   int array[100], n, c, d, position, swap;

   printf("Enter number of elements: ");
   scanf("%d", &n);

   printf("Enter %d integers:\n", n);

   for ( c = 0 ; c < n ; c++ )
   {
       printf("[%d]: ", c);
       scanf("%d", &array[c]);
   }

   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }
   printf("Sorted list in ascending order: ");

   for ( c = 0 ; c < n ; c++ )
      printf("%d\t", array[c]);

   printf("\n");

   return 0;
}
