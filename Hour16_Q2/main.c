#include <stdio.h>

void StrPrint(char *str);

main()
{
	char string[] = "I like C!";
	char *ptr;
	int i;
	
	ptr = string;
	for (i=0; ptr[i]; i++)
	{
		if (ptr[i] == 'i')
		{
			ptr[i] = 'o';
		}
		if (ptr[i] == 'k')
		{
			ptr[i] = 'v';
		}
	}
	StrPrint(ptr);
	
	return 0;
}

void StrPrint(char *str)
{
	printf("%s\n", str);
}

