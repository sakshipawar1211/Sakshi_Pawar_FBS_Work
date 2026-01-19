#include<stdio.h>

void main()
{
	char str1[]="application";
	char str2[]="apply";
	
	int res=mystrcmp(str1,str2);
	printf("%d",res);
	if(res==1)
	 printf("\nString1 is greater");
	else if(res==-1)
	  printf("\nString2 is greater");
	else
	  printf("\nBoth String are equal")  ;
}

int mystrcmp(char*str1,char*str2)
{
	for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
	{
		if(str1[i]>str2[i])
		{
			return 1;
		}
		
		else if(str1[i]<str2[i])
		{
		return -1;	
		}
		
	}
	return 0;
}