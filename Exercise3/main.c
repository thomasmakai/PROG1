#include <stdio.h>

	int main()     /* comment*/
	{
		multiply2integers();
	}
	
	int multiply2integers()
	{
		int  x;
		int  y;
		int sum;

		printf("Enter an integer \n");
		scanf("%d", &x);
		printf("Enter another integer \n");
		scanf("%d", &y);
		sum = x+y;
		int product = x*y;
		printf("The sum of the two integers you enterd is %d\n", sum);
		printf("The product of the two integers you enterd is %d\n", product);
	}