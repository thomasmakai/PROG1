#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void StrCopy(char *str1, char *str2);

int main()
{
	char *str[4] = {  "There’s music in the sighing of a reed;", 
					  "There’s music in the gushing of a rill;",
					  "There’s music in all things if men had ears;",
					  "There earth is but an echo of the spheres.\n" 
					  };

	char *ptr;
	int i;

ptr = realloc(NULL, strlen((str[0]) + 1) * sizeof(char));
StrCopy(str[0], ptr);
for (i=1; i<4; i++)
{
	ptr = realloc(ptr, (strlen(str[i]) + 1) * sizeof(char));

	if (ptr == NULL)
	{
		printf("realloc() failed.\n");
		i  = 4;
	}
	else
	{
		StrCopy(str[i], ptr);
		printf("%s\n", str);
	}
}
realloc(ptr, 0);
return 0;
}

void StrCopy(char *str1, char * str2)
{
	int i;
	
	for (i=0; str1[i]; i++)
		str2[i] = str1[i];
		str2[i] = '\0';
}

