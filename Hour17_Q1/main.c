#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int bytes, total = 0;
	int *ptr_numbers;
	int i;
	
	printf("How many bytes you want yo?\n");
	scanf("%d", &bytes);
	
	ptr_numbers = malloc(bytes * sizeof(int));
	
	for (i=0; i<bytes; i++)
	{
		ptr_numbers[i] = i+1;
	}
	
	total = 0;
	
	for (i=0; i<bytes; i++)
	{
		total += ptr_numbers[i];
	}
	
	printf("The total of all integers stored in the allocated memory is: %d\n", total);
	
}
