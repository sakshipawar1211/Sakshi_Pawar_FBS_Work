#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10]="First";
	char str2[]="Bit";
	
    char* res= Mystrcat(str1,str2); 
	
	if(res==1) 
     printf("Concat string is:%s",strcat(str1,str2));
}
char* Mystrcat(char*str1,char*str2)
{
	int i=0 ,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	
    while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return str1;
	
	
 } 