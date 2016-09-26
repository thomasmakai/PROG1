#include <stdio.h>

main()
{
	int x = 1;
	int y = 3;
	
	printf("x += y is equal to %d\n", x += y);
	printf("x += -y is equal to %d/n", x += -y);
	printf("x -= y is equal to %d\n", x -= y);
	printf("x -= -y is equal to %d\n", x -= -y);
	printf("x *= y is equal to %d\n", x *= y);
	printf("x *= -y is equal to %d\n", x *= -y);
	
	int a = 6;
	int b = 6;
	int z  = a * b == 18;
	
	printf("The value of z in the statement z = a * b == 18 is: %d\n", z);
	
	int c = 1;
	
	printf("c++ produces: %d\n", c++);
	printf("Now c contains: %d\n", c);
	
	printf("c = c++ produces: %d\n", c = c++);
	printf("Now c contains: %d\n", c);
	
	int d, e;
	d = e = 0;
	printf("The comparison result is: %d\n", d = e);
}
