// 9. WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions.

#include<stdio.h>
int DisplayLargerString(char*,char*);
void main()
{
	char str1[30]; //Apeksha
	char str2[30]; //Chavan
	
	printf("Enter Two String:");
	scanf("%s%s",str1,str2);
	
	int res=DisplayLargerString(str1,str2);
	 if(res==1)
	  printf("\nString1 is Greater");
	  else if(res==-1)
	    	printf("\nString2 is Greater");
	  else
	  printf("\nBoth are Equal");
	  
	    
}
int DisplayLargerString(char*str1,char*str2)
{
	
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
	    if(str1[i]>str2[i])
	    {
	    	
	    	return 1;;
		}
	      
	else if(str1[i]<str2[i])
	     {
	      return -1;
		 }
	
	i++;
}
return 0;
	}