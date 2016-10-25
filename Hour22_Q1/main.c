#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
	
	fp = fopen("LaoTzu.txt", "r");
	
	if (fp == NULL)
	{
		printf("You fucked up!");
		exit(1);
	}
	
	//TO DO *** 
	//Print file contents to terminal
	//Read each line from file store in char arrays
	//Print lines in reverse order to new file
	//"Lines in reverse order:"
	//Print new file contents to terminal
	
}