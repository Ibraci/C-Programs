/* Program to search for an element in an array using Binary Search */

#include <stdio.h>
#include <stdlib.h>

int binsearch(int, int [], int);

int main()
{
    int a[10], i, item, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i=1; i<=n; i++)
    {
        printf("Elements [%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the item to be searched : ");
    scanf("%d", &item);
    binsearch(n, a, item);

    return 0;
}

int binsearch(int n, int a[], int item)
{
    int beg = 1, end = n, mid;
    while(beg<=end)
    {
        mid = (beg+end)/2;
        if (item == a[mid])
        {
            printf("\nItem %d is found at location %d", item, mid);
        }

        if (item > a[mid])
            beg = mid + 1;
        else
            end = mid - 1;
    }

    printf("\nItem %d is not found", item);
    return 0;
}
