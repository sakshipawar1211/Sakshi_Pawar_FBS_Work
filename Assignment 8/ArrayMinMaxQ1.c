// 1. Find minimum and maximum number in array.

#include<stdio.h>

void main()
{
//	int arr[5]={10,20,30,40,50};

 int n ;
  printf("Enter Array size : ");
  scanf("%d",&n);
   
    int arr[n];  
   printf("\nEnter Array elements %d: ",n);
      
      for(int i=0;i<n;i++)
        
         scanf("%d",&arr[i]);
         
	int min=arr[0];
	int max=arr[0];
	
	for(int i=0;i<n;i++)
{
	  if(arr[i]<min)
	  min=arr[i];
	  
	  else
	    max=arr[i];
}

printf("Minmum Number %d",min);
printf("\nMaximum Number %d",max);
}