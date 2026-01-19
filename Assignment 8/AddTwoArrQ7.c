/*
7. Take two array and add sum in third array

Example-
arr[5]= {1,2, 3, 4,5}

brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}

*/

#include<stdio.h>
void main()
{
	
int n;
printf("Enter Array Size:");
scanf("%d",&n);

int arr[n];
printf("\nEnter Array1 Elements:");
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
int brr[n];
int crr[n];
printf("\nEnter Array2 Elements:");
for(int i=0;i<n;i++)
{
	scanf("%d",&brr[i]);
}

printf("\nAdd sum of two array in third array is :");
for(int i=0;i<n;i++)
{
   crr[i]=arr[i]+brr[i];
   printf(" %d",crr[i]);
}

}