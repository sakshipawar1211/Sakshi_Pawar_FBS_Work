#include<stdio.h>
#include<string.h>
char* Mystrstr(char*,char*);
void main()
{
	
	
	char str1[10];
	char str2[5];
	printf("Enter First string:");//FirstBit
    scanf("%s",str1);
    printf("Enter Second string:");//Bit
    scanf("%s",str2);
    char* res=Mystrstr(str1,str2);
    
   if(res!='\0')
   {
   	printf("substring %s found  at index %d" ,str2,res-str1);
   }
   else
   {
   	printf("substring not found");
   }
}
   	
   
     
