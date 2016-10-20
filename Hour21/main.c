#include <stdio.h>
#include <stdlib.h>

int main()
{
	char haiku[100];
	FILE *fp;
	char ch;
	int linecount, wordcount, charcount;
	
	linecount = 0;
	wordcount = 0;
	charcount = 0;
	
	fp = fopen("haiku.txt", "r");
	
	if (fp)
	{
		while ((ch=getc(fp)) != EOF) {
			if (ch != ' ' && ch != '\n') {++charcount;}
			
			if (ch == ' ' || ch == '\n') {++wordcount;}
			
			if (ch == '\n') {++linecount;}
		}
		
		if (charcount > 0 )
		{
			++linecount;
			++wordcount;
		}
	}
	else
	{
		printf("Failed to open the file!\n");
	}
	printf("Number of Lines : %d \n", linecount);
	printf("Number of Words: %d\n", wordcount);
	printf("Number of characters: %d\n", charcount);
	
	getchar();
	return(0);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    char input[20], c;
//    FILE *fp;
//    printf("Enter file name...\n");
//
//    scanf("%s",input);
//    fp = fopen(input,"r+");
//
//    if(fp != NULL)
//    {
//        printf("========( %s )========\n",input);
//        do
//        {
//            c = fgetc(fp);
//            putchar(c);
//        }while(c != EOF);
//        getchar();
//        gets(input);
//        fputs(input,fp);
//    }
//    else
//    {
//        printf("Could not open file!\n");
//    }
//
//    if(fclose(fp) == 0)
//        printf("File closed sucessfully");
//    return 0;
//}