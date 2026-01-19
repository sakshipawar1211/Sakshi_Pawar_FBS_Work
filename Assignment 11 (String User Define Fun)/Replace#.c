#include<stdio.h>
void main()
{
	
	char str[]="Apeksha";
	myreplace(str);
	
}

	void myreplace(char*str)
	{
			
	for(int i=0;str[i]!='\0';i++)
	
	{	if(str[i]=='A'||str[i]=='a')
		{
			str[i]='#';
		}
		else
		if(str[i]=='k')
			   str[i]='@';
	}
		printf("%s",str);
	}