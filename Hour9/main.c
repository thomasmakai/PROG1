#include <stdio.h>
#include <math.h>

main()
{
	//1 display the decimal values of x and y
	short x;
	unsigned short y;
	x = 0xAB78;
	y = 0xAB78;
	
	printf("Decimal values of 0xAB78 = %d and 0xAB78 = %d\n", x, y);
	printf(" \n");
	
	//2 measure the sizes of short int, long int, and long double on your machine
	short int number1 = 32;
	long int number2 = 32487163478959;
	long double number3 = 8723984798.9823476289;
	printf("The size of short int %d  is %d\n", number1, sizeof(number1));
	printf("The size of long int %d  is %d\n", number2, sizeof(number2));
	printf("The size of long double %Lf is %d\n", number3, sizeof(number3));
	printf(" \n");
	
	//3 display negative integers in hex format along with their signed int equivalents
	int integer1 = 345;
	int integer2 = 43230;
	
	printf("The product of %d and %d is %ld\n", integer1, integer2, integer1 * integer2);
	printf(" \n");
	
	//4 display negative integers in hex format along with their signed int equivalents
	int negativeinteger1 = -23425;
	int negativeinteger2 = -6932374;
	
	printf("The hex value of %d is 0x%x\n", negativeinteger1, negativeinteger1);
	printf("The signed integer value of %d is %d\n", negativeinteger1, negativeinteger1);
	printf(" \n");
	
	//5 Given an angle of 30 degrees, write a program to calculate its sine and tangent values.
	int angle = 30;
	double radian = angle * M_PI / 180.0;
	
	printf ("The sine value of %f is %f\n", radian, sinf(radian));
	printf ("The tangent value of %f is %f\n", radian, tanf(radian));
	printf(" \n");
	
	//6 Calculate the non-negative square root of 0x19A1
	int hexnumber = 0x19A1; 
	
	printf("The non-negative square root of 0x%x is %2f", hexnumber, sqrt(hexnumber));
	
	
}