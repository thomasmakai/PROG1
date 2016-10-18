#include <stdio.h>

struct automobile { int year; char model[10]; int engine_power; double weight;} sedan = {1997, "New Model", 200, 2345.67};

int main()
{
	printf("Initial values held by the structure: %d %s %d %f", sedan.year, sedan.model, sedan.engine_power, sedan.weight); 
}