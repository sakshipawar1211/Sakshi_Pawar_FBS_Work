//2. Search the given number in array.
#include<stdio.h>
#include<stdlib.h>
void search(int*arr,int,int );
void main()
 {
	int n ;
	printf("Enter Array size:");
	scanf("%d",&n);
 int *p = (int*)malloc(sizeof(int) * n); 
//	int arr[5]={10,20,30,40,50};

	int arr[n];
	
	
	printf("Enter Array Elements %d:",n);

	for(int i=0; i<n; i++)
	 {
		scanf("%d",&arr[i]);
	}
	
	int ele;
	printf("search element :");
	scanf("%d",&ele);
	search(arr,n,ele);
}
	void search(int*arr,int n,int ele)
	{
		
	int found=0;

	printf("Array elements are:\n");
	for(int i=0; i<5; i++) 
	{
		printf("%d ",arr[i]);

		if(arr[i]==ele) 
		{
			found=1;
		}

	}
	
	if(found==1)
		printf("\nFound");
	else
		printf("\nNot Found");
	}
	

