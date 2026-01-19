// 3. Find sum of all numbers.

#include<stdio.h>
void arraySum(int*, int, int*);
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
     
     arraySum(arr,n,&sum);
}
void arraySum(int* arr,int n,int *sum)
{
	     printf("Array Elements:");
     
     for(int i=0;i<n;i++)
     {
     	printf("\n%d",arr[i]);
     	*sum=*sum+arr[i];
	 }
	 printf("\nSum is :%d",*sum);
}