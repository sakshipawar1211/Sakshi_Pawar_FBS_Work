// 6. WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
char* ReplaceBlankSpace(char*);
void main()
{
 char str[40];
 printf("Enter String:");//First Bit Solution
 
fgets(str,sizeof(str),stdin);

 
 ReplaceBlankSpace(str);
	
}
char* ReplaceBlankSpace(char* str)
{

int i=0;
while(str[i]!='\0')	
{
		if(str[i]==' ')
	{
		str[i]='@';
	}

		i++;
}


printf("After Replace Every Blank Space with special symbol :%s",str);
}