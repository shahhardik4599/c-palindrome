#include<Stdio.h>

void Isplaindrome(char str[]);

void main()
{
	char str[20];
	printf("Enter a string: ");
	gets(str);
	Isplaindrome(str);
}

void Isplaindrome(char str[])
{
	char b[20];
	strcpy(b,str);
	strrev(b);
	if(strcmp(b,str)==0)
		printf("String is plaindrome.");
	else
		printf("String is not plaindrome.");
}

