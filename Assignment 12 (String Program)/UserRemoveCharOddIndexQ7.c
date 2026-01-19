//7. WAP to Remove the Characters of Odd Index Values in a String

#include<stdio.h>
char* RemoveCharOddIndex(char*);
void main ()
{
	char str[30];
	printf("Enter String:");
	scanf("%s",str);
	
	RemoveCharOddIndex(str);
}
char* RemoveCharOddIndex(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(i%2!=0)
		{
			str[i]=str[i+1];
		}
		i++;
	}
	printf("After Removing char of odd index %s :",str);
}