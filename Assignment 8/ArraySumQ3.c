// 3. Find sum of all numbers.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter Array Size:");
	scanf("%d",&n);
	
  //int arr[5]={10,20,30,40,50};
   int sum=0;
     
     int arr[n];
     printf("Enter Array Elements:");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
     
     printf("Array Elements:");
     
     for(int i=0;i<n;i++)
     {
     	printf("\n%d",arr[i]);
     	sum=sum+arr[i];
	 }
	 printf("\nSum is :%d",sum);
}