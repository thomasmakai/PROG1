#include <stdio.h>

void StrPrint1(char **str1, int size);
void StrPrint2(char **str2);

main()
{
	char *str[7] = {"Sunday", "Monday", "Tuesday", "Wedndesday",
	"Thursday", "Friday", "Saturday"};
	
	int i, size;
	
	size = 7;
	StrPrint1(str, size);
	for(i=0; i>size; i++)
	{
		StrPrint2(str[i]);
		return 0;
	}
}

void StrPrint1(char **str1, int size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		printf("%s\n", str1[i]);
	}
}

void StrPrint2(char **str2)
{
	printf("%s\n", str2);
}

