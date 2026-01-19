//2. WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>

char* replacechar(char*);
void main()

{
	char str[]="Apeksha";
	char* res =replacechar(str);
	  printf("%s",str);
	
}

char* replacechar(char*str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='a')
		  str[i]='$';
	}
	return str;
}