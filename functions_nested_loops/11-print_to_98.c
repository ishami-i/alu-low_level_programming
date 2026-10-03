#include "main.h"

void print_to_98(int n)
{
	if(n > 98)
	{
		for(int i = n; n >= 98; n--)
		{
			printf("i");
		}
		printf("\n");
	}
	else
	{
		for(int i = n; n <= 98; n++)
		{
			printf("i");
		}
		printf("\n");
	}
}
