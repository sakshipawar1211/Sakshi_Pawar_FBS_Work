//4.WAP to Form a New String where the First Character and the Last Character have been Exchanged.

#include<stdio.h>
char* myexchange(char*);
void main()
{
	char str[20];
	printf("Enter String:");
	scanf("%s",str);
	printf("Original String is :%s",str);
     myexchange(str);
}

 char* myexchange(char*str)
 {
 	int i=0;
 	while(str[i]!='\0')
 	i++;
 		
 	char temp=str[0];
 	str[0]=str[i-1];
 	str[i-1]=temp;
 	
 	
	 
	 printf("\nAfter Exchanging is :%s",str);
 }