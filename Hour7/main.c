#include <stdio.h>

main()
{

//	int x = 15;
//	int y = 4;
//	printf("%d\n", y *= x + 5);
//	printf("%d\n", y = y * x + 5);

/************************************/
int i, j;

for (i=0, j=1; i<8; i++, j++)
{
	printf("%d + %d = %d\n", i, j, i+j);
}
//
//for (i=0, j=1; i<8; i++, j++);
//{
//	printf("%d + %d = %d\n", i, j, i+j);
//}

/************************************/

int c;

c = ' ';
printf("Enter a character:\n(enter K to exit)\n");
while (c != 'K') {
	c = getc(stdin);
	putchar(c);
} 
printf("\nOut of the while loop. Bye!\n");

/*************************************/

int z;


for (int z = 65; z < 72; z++) 
{
	printf("The numeric value of %c is %d.\n", z, z);
}

/* 7.6 with outer while loop & inner do-while loop */

int t = 0;
while (t < 3) { 	//outer loop
	t++;
	printf("The start of iteration %d of the outer loop.\n", t);
	int m = 1;
	do { 			// inner lop
		printf("    Iteration %d of the inner loop.\n", m);
		m++;
	} while(m<=4);
	
	printf("The end of iteration %d of the outer loop.\n", t);
}


}
