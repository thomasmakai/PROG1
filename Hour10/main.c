#include <stdio.h>

main()
{
	// 10.1 with i%6 == 0 logical expression
	int i;
	
	printf("Integers that can be divided by 6\n");
	printf("(within the range of 0 to 100):\n");
	for (i = 1; i <= 100; i++) {
		if (i%6 == 0)
			printf("   %d\n", i);
	}
	
	// 10.1 with nested if statements + arrays
	
	int x;
	int DivisibleBy2 [50];
	int DivisibleBy3 [33];
	int DivisibleBy6 [16];
	int b = 0;
	int c = 0;
	int d = 0;
	
	
	printf("From 0 to 100 the following numbers are divisible by 2   3   6\n");
	for (x = 1; x <= 100; x++) {
		if (x%2 == 0)
		{
			DivisibleBy2[b] = x;
			b++;
		}

	}
	
	for (x = 1; x <= 100; x++) {
		if (x%3 == 0)
			{
			DivisibleBy3[c] = x;
			c++;
			}
		}
	
	for (x = 1; x <= 100; x++) {
		if (x%6 == 0)
			{
			DivisibleBy6[d] = x;
			d++;
			}
		}
	
	for (int i = 0; i < 50; i++) {
	printf("%d", DivisibleBy2[i]);
	if (i < 33)
		printf("%30d", DivisibleBy3[i]);
		if (i < 16)
			printf("%30d", DivisibleBy6[i]);
		else
			printf(" ");
	printf("\n");
	}
	
	// Read standaord I/O and display numeric values for A,B and C
	
	char z;
	
	printf("Enter characters: /n");
	z = getchar();

}