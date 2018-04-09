/* Program to sort a list of elements using Selection Sort Algorithm */

#include <stdio.h>

int ascending(int a[], int n);

int main()
 {
     int a[100], i, n;
     printf("Enter the number of elements to be sorted: ");
     scanf("%d",&n);

     for(i=0; i<n; i++)
     {
         printf("%d. Enter element: ",i+1);
         scanf("%d",&a[i]);
     }

     ascending(a, n);

     printf("In ascending order: ");
     for(i=0; i<n; i++)
     {
        printf("%d\t",a[i]);
     }
     printf("\n");
     return 0;
}

int ascending(int a[], int n)
{
    int i, j, temp;

    for(j=0; j<n; j++)
    {
       for(i=j+1; i<n; i++)
       {
           if(a[j] > a[i])
           {
               temp = a[j];
               a[j] = a[i];
               a[i] = temp;
           }
       }
    }

    return a[i];
}
