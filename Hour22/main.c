#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
	
	fp = fopen("LaoTzu.txt", "w");
	
	if (fp == NULL)
	{
		printf("You fucked up!");
		exit(1);
	}
	
	const char *text = "Be bent, and you will remain straight.\nBe vacant, and you will remain full.\nBe worn, and you will remina new.";
	fprintf(fp,"%s", text);
	
	
}