#include<stdio.h>

int isValidPassword(char*);
void main()
{
	char str[]="Fbs@pass123";
	int res=isValidPassword(str);
	
	if(res==1)
	   printf("Valid");
	else
	   printf("Invalid");
}

int isValidPassword(char*str)
{
	int length=0,upper=0,symbol=0,digit=0;
	for(int i=0;str[i]!='\0';i++)
	
	{
		char ch=str[i];
		length++;
		
	
		if(ch>='A'&&ch<='Z')
		{
			upper=1;
		}
		else if(ch>='0'&&ch<='9')
		{
			digit=1;
		}
		else if(ch=='@'||ch=='#'||ch=='$'||ch=='*')
		  symbol=1;
		  
		  else if(ch==" ")
		    return 0;
		    
	}
	
	if(length>=5&&upper&&digit&&symbol)
	   return 1;
	   else
	     return 0;
	
	
}