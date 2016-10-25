#include <stdio.h>

main()
{
	float *ptr_float1;
	float *ptr_float2;
	
	int nmbroflts;
	
	printf("How many floats do you want?\n");
	scanf("%d", &nmbroflts);
	
	ptr_float1 = calloc(nmbroflts, sizeof(float));
	ptr_float2 = malloc(nmbroflts * sizeof(float));
	
	printf("%f\n", ptr_float1[0]);
	printf("%f\n", ptr_float2[0]);
	
	
}
