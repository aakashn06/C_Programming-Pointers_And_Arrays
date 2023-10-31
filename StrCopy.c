#include <stdio.h>

void strcopy(char*, char*);

void main()
{
	char strDestination[100];
	char str[] = "This is a string copy test";

	strcopy(strDestination, str);
	printf("%s\n", strDestination);
}

/* copy t to s*/
void strcopy(char* s, char* t)
{
	while ((*s++ = *t++) != '\0')
		;
}