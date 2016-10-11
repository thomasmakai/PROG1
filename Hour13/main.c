#include <stdio.h>
#include <string.h>

main(){
	// 1
	printf("----Question 1----\n");
	
	char str1[] = "This is Exercise 1.";
	char str2[20];
	
	strcpy (str2, str1);
	
	printf("The value of str2 is %s\n", str2);
	
	// 2
	printf("----Question 2----\n");
	
	char str3[] = "Muthefuka";
	int str3length; 
	
	for (int i=0; str3[i] != '\0'; i++) {
		str3length = i; 
	}
	
	printf("Length from loop: %d\n", str3length); 
	printf("Length from strlen: %d\n", strlen(str3));
	
	// 3
	printf("----Question 3----\n");
	
	char str4[80];
	int i, delt = 'a' - 'A'; 
	
	printf("Enter a string less than 80 characters:\n");
	gets(str4);
	i= 0;
	while (str4[i]) {
		if ((str4[i] >= 'A') && (str4[i] <= 'Z'))
			str4[i]  += delt; /*convert to lower case*/
			++i;
	}
	printf("The entered string is (in uppercase):\n ");
	puts(str4);
	
	// 4
	printf("----Question 4----\n");
	
	int numbah1, numbah2, numbah3;
	printf("Enter 2 integers \n");
	scanf("%d %d", &numbah1, &numbah2);
	
	numbah3 = numbah1 + numbah2;
	printf("The sum of the 2 integers you enters is %d", numbah3);
	
	
}