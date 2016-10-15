#include <stdio.h>

int add_two(int x, int y)
{
	static int counter = 1;
	static int sum = 0;
	if (counter > 1)
	{
		printf("The previous function call was %d with the result: %d \n\n", counter-1, sum);
		
	}
	printf("This is the function call of %d,\n", counter++);
	sum = x + y;
	return sum;

}

main()
{
	int i, j;
	
	for (i=0, j=5; i<5; i++, j--)
	{
		printf("the addition of %d and %d is %d.\n\n", i, j, add_two(i, j));
		
	}
	return 0;
}