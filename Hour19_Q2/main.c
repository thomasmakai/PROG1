#include <stdio.h>

struct employee{int id; char name[32]};

void Display(struct employee s)
{
	printf("Employee Name: %s\n", s.name);
	printf("Employee ID #%03d\n\n", s.id);
}

main(void)
{
	struct employee info = {1, "B. Smith"};

	Display(info);
}