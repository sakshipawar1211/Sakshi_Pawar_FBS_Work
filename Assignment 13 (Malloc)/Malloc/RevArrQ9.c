// 9. Reverse the given array.

#include<stdio.h>
void  ReverseArray(int*,int);
void main()
{
	int n;
	printf("Enter Array Size:");
	scanf("%d",&n);
	
    int	arr[n];
    printf("\nEnter Array Elements:");
    
  for(int i=0;i<n;i++)
     {
     	scanf(" %d",&arr[i]);
	 }
    ReverseArray(arr,n);
}
void  ReverseArray(int*arr,int n)

{
	
		printf("Array Elements are:");
     for(int i=0;i<n;i++)
     {
     	printf(" %d",arr[i]);
	 }

     printf("\nReverse Array are:");
	  for(int i=0,j=n-1;i<j;i++,j--)
     {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       
	   	  
	 }

	 
	   for(int i=0;i<n;i++)
     {
       
	   	printf(" %d",arr[i]);  
	 }

}
/*
// 9. Reverse the given array.

#include<stdio.h>

void main()
{
	int n=4;
	int arr[4]={10,20,30,40};
	
     for(int i=0;i<n;i++)
     {
     	printf(" %d",arr[i]);
	 }

	  
	 	printf("\n");
	 
	 
	   for(int i=3;i>=0;i--)
     {
       
	   	printf(" %d",arr[i]);  
	 }


}
*/