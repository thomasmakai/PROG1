#include <stdio.h>

union employee{int start_year; int dpt_code; int id_number;} info;

void Display(union employee p)
{
	printf("Start Year: %d\n", p.start_year);
	printf("Department Code: %d\n", p.dpt_code);
	printf("ID Number # %d\n", p.id_number);
}

main(void)
{
	info.start_year = 1997;
	Display(info);
	info.dpt_code = 8;
	Display(info);
	info.id_number = 1234;
	Display(info);
}