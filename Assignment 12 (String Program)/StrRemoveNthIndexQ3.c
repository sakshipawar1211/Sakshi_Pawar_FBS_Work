//3. WAP to Remove the nth Index Character from a Non-Empty String

#include <stdio.h>
void Myremove(char*,int);
void main()
{
	char str[30];
	int n=0;
	
     printf("Enter String :");
      scanf("%s",str);
    printf("\nEnter index of character:");
     scanf("%d",&n);
	Myremove(str,n);
	
}

void Myremove(char*str,int n)
{
	for(int i=n;str[i]!='\0';i++)
	{
	
	 str[i]=str[i+1];
	 
		
	}
	
	printf("\n%s",str);
}