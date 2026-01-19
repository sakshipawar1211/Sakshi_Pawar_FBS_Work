// 8. Merge two arrays

#include<stdio.h>
void MergeTwoArray(int*,int*,int*,int,int,int);
void main()
{
   int s1,s2;
   
   printf("Enter array1 size:");
   scanf("%d",&s1);
   
   printf("Enter array2 size:");
   scanf("%d",&s2);
   	   
	int s3=s1+s2;
	int arr3[s3];
	
   
	int arr1[s1];
	printf("Enter Array1 elements:");
	for(int i=0;i<s1;i++)
	   scanf("%d",&arr1[i]);
	   
	int arr2[s2];
	printf("Enter Array2 elements:");
	for(int i=0;i<s2;i++)
	   scanf("%d",&arr2[i]);

	   
MergeTwoArray(arr1,arr2,arr3,s1,s2,s3);
	
}
void MergeTwoArray(int*arr1,int*arr2,int*arr3,int s1,int s2,int s3)
	
{
	
		for(int i=0;i<s1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(int i=0,j=s1;i<s2;i++,j++)
	{
		arr3[j]=arr2[i];
	}
	
	printf("Merged Array:")	;
	printf("[");
	for(int i=0;i<s3;i++)
	{
		
		printf(" %d",arr3[i]);
	}
	printf("]");
	
}