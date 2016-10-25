#include <stdio.h>

main()
{
	float *ptr_float;
	
	ptr_float = calloc(100 sizeof(float));
	
	ptr_float = realloc(ptr_float, 150 * sizeof(float));
}