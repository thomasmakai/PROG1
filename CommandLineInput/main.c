#include <stdio.h>

int main(int argc, char *argv[], char *base10[])
{
	if (argc =! 3)
	{
		printf("You fucked up yo\n");
	}
	else
	{
		if (argv[1] == "help")
		{
			printf("The program accepts the following arguments:\n");
			printf("-b to convert the number to binary (base 2)");
			printf("-h to convert the number to hexadecimal (base 16)");
			printf("-o to convert the number to octal (base 8)");
			printf("-");
		}
		if (argv[2] == "b")
		{
			prtinf("binary number here");
		}
		if (argv[2] == "h")
		{
			printf("hexadecimal number here");
		}
		if (argv[2] == "o")
		{
			prtinf("octal number here");
		}
	}
	
	
}
