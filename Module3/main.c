#include <stdio.h>

main()
{
char B = 'B';
char y = 'y';
char e = 'e';

printf("%c%c%c\n", B, y, e);

int X = 123;
double Y = 123.456;

printf("%-3d\n", X);
printf("%-1.3f\n", Y);

int f = 15;
int g = 150;
int h = 1500;
printf("%X %X %X\n", f, g, h);

printf("Enter a character: \n");
char i = getchar();
printf("You enetered: ");
putchar(i);

}

