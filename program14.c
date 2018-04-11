// C Pr0gram to insert an element in an array

#include <stdio.h>

int main()
{
   int array[100], position, c, n, value;

   printf("Enter number of elements in array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);

   for (c = 1; c <= n; c++)
   {
       printf("[%d]: ", c);
       scanf("%d", &array[c]);
   }

   printf("Enter the location where you wish to insert an element: ");
   scanf("%d", &position);

   printf("Enter the value to insert: ");
   scanf("%d", &value);

   for (c = n; c >= position; c--)
      array[c+1] = array[c];

   array[position+1] = value;

   printf("Resultant array is\n");

   for (c = 1; c <= n + 1; c++)
      printf("%d\n", array[c]);

   return 0;
}
