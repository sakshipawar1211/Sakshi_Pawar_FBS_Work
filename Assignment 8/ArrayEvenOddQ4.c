// 4. Find odd and even among the numbers.

#include<stdio.h>
 
 void main()
 {
 	int n;
 	printf("Enter Array Size:");
 	scanf("%d",&n);
 	
 	int arr[n];
 	printf("Enter Array Elemnts:");
 	
 	for(int i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 
 	printf("Array Elemnts:");
 	for(int i=0;i<n;i++)
 	{
 		printf("%d ",arr[i]);
 		
	 }
	 
	 printf("\nEven number:");
	 for(int i=0;i<n;i++)
 	{
 		if(arr[i]%2==0)
 		printf("%d ",arr[i]);
 		
	 }
	 
	 printf("\nodd number:");
	 for(int i=0;i<n;i++)
 	{
 			if(arr[i]%2!=0)
 		printf("%d ",arr[i]);
 		
	 }
	 
	 	
 		
 }