// C program to sort elements using insertion sort algorithm
#include<stdio.h>
int main()
{
	int data[100],n,temp,i,j;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		printf("[%d]: ", i);
		scanf("%d",&data[i]);
	}
	for(i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;
		while(temp < data[j] && j >= 0)
		// To sort elements in descending order, change temp < data[j] to temp > data[j] in above line.
		{
			data[j+1] = data[j];
			--j;
		}
		data[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",data[i]);
    return 0;
}
