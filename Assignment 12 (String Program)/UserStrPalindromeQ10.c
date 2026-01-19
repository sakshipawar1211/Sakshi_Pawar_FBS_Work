// 10 .Write a program to check the string is palindrome or not.

#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="ABBA";
	char org[10];
     strcpy(org,str);
    strrev(str);
    

 int res =strcmp(org,str);
 
  if(res==0)
  {
  printf("Palindrome");
	}
	else
	{
		  printf("Not Palindrome");
		}	
}

/*

#include<stdio.h>
void main()
{
	char str1[20];
	char str2[40];
	printf("Enter String");//ABBA
	scanf("%s%s",str1,str2);
	 
	 Mystrcpy(str2,str1);
	 Mystrrev(str1);
	int res= Mystrcmp(str1,str2);
	  if(res==1)
	    printf("String Palindrome");
      else
        printf("String is not Palindrome");
}

int Mystrcmp(char* str1,char*str2)
{
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]==str2[i])
		  return 1;
		else
		  return 0;
	}
}
  

*/