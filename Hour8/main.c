#include <stdio.h>

int main()
{
	int x = 0xEFFFFFFF;
	int y = 0x10000000;
	
	printf("Hex value for ~x: %x\n", ~x);
	printf("Hex value for ~y: %x\n", ~y);
	
	printf("Decimal value for !x: %d\n", !x);
	printf("Unsigned decimal value for !x: %u\n", !x);
	
	printf("Decimal value for !y: %d\n", !y);
	printf("Unsigned value for !y: %u\n", !y);
	
	/**********************/
	
	int a = 123;
	int b = 4;
	char nothing = " ";
	
	printf("Decial value for a <<b: %d\n", a << b);
	printf("Decimal value for a << b: %d\n", a << b);
	printf("Unsigned decomal value for shit: %c\n", nothing);
	
	/**********************/
	int h1 = 0xFFFF;
	int h2 = 0x8888;
	printf("Hex value for expression 1: 0x%x\n", h1 ^ h2);
	int h3 = 0xABCD;
	int h4 = 0x4567;
	printf("Hex value for expression 2: 0x%x\n", h3 & h4);
	int h5 = 0xDCBA;
	int h6 = 0x1234;
	printf("Hex value for expression 3: 0x%x\n", h5 | h6);
	
	/**********************/
	
	char input;
	input = getchar();
	
	for (input = ' '; input!= 'q' ? 1:0; ) 
	{
		printf("Enter a character: \n");
		input = getchar();
		char useless = getchar();
	}
	

}

