#include <stdio.h>

void StrPrint(char str[][15], int max);
main()
{
	char str[2][15] = {"You know what,","C is powerful."};
	
	StrPrint(str, 2);
	
	return 0;
}

void StrPrint(char str[][15], int max)
{
	int i;
	
	for (i=0; i<max; i++)
	{
		printf("%s\n", str[i]);
	}
}