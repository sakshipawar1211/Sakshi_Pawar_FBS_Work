
// 5. WAP to Count the Number of Vowels in a String

#include<stdio.h>
char* CountVowel(char* );
void main()
{
	char str[30];
	printf("Enter String:");
	scanf("%s",str);
	
	CountVowel(str);
}
char* CountVowel(char* str)
{
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
}