// 10. Sort the array.

#include<stdio.h>

void main()
{
	int n;
	printf("Enter Array Size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter Array Elements:");
		for(int i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	
	printf("Array Elements are :");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			
		if(arr[i]>arr[j])
		{
		
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
     	}
		
     
	 }
	 	}
	printf("\nSorted array:");
	 for(int i=0;i<n;i++)
     {
       
	   	printf(" %d",arr[i]);  
	 }

}