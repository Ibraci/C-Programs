// C Program to search for an element using sequential search

#include <stdio.h>

int linearSearch(int*, int);

int main()
{
    int i,n,arr[5];
    int num;     /* element to search*/
    int position;

    printf("Enter up to 5 elements of the array:\n");
    for(i = 0; i< 5; i++) {
        printf("[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nNow enter element to search: ");
    scanf("%d",&num);

    /* calling linearSearch function*/

    position=linearSearch(arr,num);

    if(num == -1)
        printf("Element not found.\n");
    else
        printf("Element found at %d position.\n",position);

    return 0;
}

int linearSearch(int *a,int n)
{
    int i,pos=-1;

    for(i = 0; i< 5; i++)
    {
        if(a[i] == n)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
