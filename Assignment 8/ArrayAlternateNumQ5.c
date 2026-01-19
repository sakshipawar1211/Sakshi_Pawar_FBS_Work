// 5. Print alternate elements in array.

#include<stdio.h>

void main()
{
	int n;
	printf("Enter Array Size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter array elements:");
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("array elements:");
    	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

   printf("\nAlternate numbers are:");
	for(int i=0;i<n;i=i+2)
	{
		printf("%d ",arr[i]);
	}
	
	
}