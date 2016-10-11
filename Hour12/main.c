#include <stdio.h>

main(){
	
	// 1
	char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
	
	printf("\n----Question 1----\n");
	
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", array_ch[i]);
	}
	
	
	
	// 2
	char array_ass[5]; 
	
	printf("\n----Question 2----\n");
	
	for (int i = 0; i < 5; i++)
	{
		array_ass[i] = 'a' + i;
	}
	
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", array_ass[i]);
	}
	
	// 3
	printf("\n----Question 3----\n");
	char list_ch[][2] = {'1','a','2','b','3','c','4','d','5','e','6','f'};
	
	printf("Size of list_ch array in memory: %zu bytes\n", sizeof(list_ch));
	
	// 4
	printf("\n----Question 4-----\n");
	char array_shite[10] = {'I', ' ', 'l', 'i', 'k', 'e', ' ', 'C', '!', '\0'};
	int i;
	for (i=0; array_shite[i] != '\0'; i++) {
		printf("%c", array_shite[i]);
	}
	
	
	//5 
	printf("\n----Question 5-----\n");
	double list_data[6] = {1.12345, 2.12345, 3.12345, 4.12345, 5.12345};
	
	printf("Size of list_data array in memory: %zu bytes\n", sizeof(list_data));
	
	int numberofelements = sizeof(list_data);
	int sizeofarrayinmemory = numberofelements * 1;
	
	printf("Size of list_data in memory: %d bytes\n", sizeofarrayinmemory);
	
	


}