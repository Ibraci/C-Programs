// C Program to delete the specified integer from the list
#include <stdio.h>

int main()
{
    int vectorx[10];
    int i, n, pos, element, found = 0;

    printf("Enter how many elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("[%d]: ", i);
        scanf("%d", &vectorx[i]);
    }

    printf("Input array elements are: ");

    for (i = 0; i < n; i++)
        printf("%d\t", vectorx[i]);
    printf("\n");

    printf("Enter the element to be deleted: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (vectorx[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1) {
        for (i = pos; i <  n - 1; i++)
            vectorx[i] = vectorx[i + 1];

        printf("The resultant vector is: ");

        for (i = 0; i < n - 1; i++)
            printf("%d\t", vectorx[i]);
    }
    else
        printf("Element %d is not found in the vector\t", element);

    printf("\n");

    return 0;
}
