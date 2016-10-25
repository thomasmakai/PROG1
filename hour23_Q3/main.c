#include <stdio.h>
#define UPPER_CASE 0
#define LOWER_CASE 0

main()
{
	#if UPPER_CASE
	printf("THIS LINE IS PRINTED OUT,\nBECAUSE UPPER_CASE IS DEFINED.\n".);
	#elif LOWER_CASE
	printf("This line is printed out,\nbecause LOWER_CASE is defined.\n");
	#else
	printf("This line is printed out because neither UPPER_CASE nor LOWER_CASE is defined\n");
	#endif
}
