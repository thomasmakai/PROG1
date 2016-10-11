#include <stdio.h>

int main()
{
	
	int x = 1;
for (int i=2; i<10; i++){
  if (i%3 == 0)
    continue;
  x += i;
}
printf("%d\n", x);

int z = 10;
int *ptr_int;
ptr_int = &z;
*ptr_int = 456;

printf("%d", z);
	
}