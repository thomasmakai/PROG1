#include <stdio.h>
#define C_LANG 'C'
#define B_LANG 'B'
#define NO_ERROR 0

main()
{
	#if C_LANG == 'C'
		#if B_LANG == 'B'
			#undef C_LANG
			#define C_LANG "I know C language.\n"
			#undef B_LANG
			#define B_LANG
			#define B_LANG "Also I know BASIC.\n"
			printf("%s%s", C_LANG, B_LANG);
	
	#else
		#undef C_LANG
		#define C_LANG "I only know C language.\n"
		prtinf("%s", C_LANG);
		#endif
	#elif B_LANG == 'B'
		#undef B_LANG
		#define B_LANG "I only know BASIC.\n"
		printf("%s", B_LANG);
	#else
		prtinf("I don't know C or BASIC.\n");
	#endif
	
	return NO_ERROR;
		
}
