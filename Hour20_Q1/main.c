#include <stdio.h>
#include <string.h>

main()
{
	union menu{char name[23]; double price;} dish;
	
	printf("The content assigned to the union separately:\n");
	strcpy(dish.name, "Sweet and Sour Chicken");
	
	dish.price = 9.95;
	
	printf("Dish Name: %s\n", dish.name);
	
	printf("Dish Price: %5.2f\n", dish.price);
}
