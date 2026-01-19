// 6. Accept array and print only prime numbers of array.

#include<stdio.h>

void main()
{
	
	int n;
	printf("Enter Array Size:");
	scanf("%d",&n);
	
    int arr[n];
    
    printf("Enter Array:");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	
	printf("Array elements are:");
    for(int i=0;i<n;i++)
    {
    	printf(" %d",arr[i]);
   }
   
   printf("\nPrime Numbers from Array are:");
   for(int i=0;i<n;i++)
   {
   int num=arr[i];
   int flag=0;
	
  	for(int j=2;j<arr[i];j++)
	{
		if(arr[i]%j==0)
		{
			flag=1;
			break;
		}
	}
	
    	if(flag==0)
    	printf(" %d",arr[i]);
    
	
	}
}

