#include <stdio.h>

void StrPrint(char *str);

main()
{
	char string[] = "I like C!";
	
	StrPrint(string);
	
	return 0;
}

void StrPrint(char *str)
{
	printf("%s\n", str);
}