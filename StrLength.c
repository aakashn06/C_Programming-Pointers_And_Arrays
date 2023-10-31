#include <stdio.h>

int strlength(char* s);

void main()
{
	int StringLen;
	char amessage[] = " This is an array of characters";
	char* pmessage = "This is a pointer to characters";

	StringLen = strlength("Hello World");
	printf("String length of Hello World is : %d\n", StringLen);
	StringLen = strlength(amessage);
	printf(" String length of array is %d\n", StringLen);
	StringLen = strlength(pmessage);
	printf(" String length of pointer to characters is %d\n", StringLen);
}

int strlength(char* s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}