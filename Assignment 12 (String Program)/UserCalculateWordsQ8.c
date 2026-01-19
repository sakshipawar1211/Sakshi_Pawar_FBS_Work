//8. WAP to Calculate the Number of Words Present in a String

 #include<stdio.h>
 char* CalculateWords(char*);
 void main()
 {
 	char str[50];
 	printf("Enter String:");
 	fgets(str,sizeof(str),stdin);
 	
 	CalculateWords(str);
 	
 }
char* CalculateWords(char* str)
{
	
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		 if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
            (i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t'))
		{
			count++;
		}
		i++;
	}

	printf("%d",count+1);
}