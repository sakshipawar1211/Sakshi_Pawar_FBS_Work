//1. Write a program to scan string from user then scan a single character and search it in a accepted string.

#include<stdio.h>
void search(char*,char);

void main()
{

	char str[20];
	char ch;
	
	printf("Enter String:");
	scanf("%s",&str);
	fflush(stdin);
	printf("\nEnter char:");
	scanf("%c",&ch);
	
	 search(str,ch);

}
void search(char*str,char ch)
{
  
 int found=0;
for(int i=0;str[i]!='\0';i++)
 {

	if(str[i]==ch)
	{
		found=1;
		break;
	}
 }

if(found==1)
   printf("char found");
else
    printf("char not found");
	 
    }