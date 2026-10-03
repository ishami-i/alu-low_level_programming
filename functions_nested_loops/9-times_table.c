#include "main.h"

void times_table(void)
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			int result = i * j;
			if(j == "9")
			{
				return("result$");
			}
			else
			{
				return("result, ");
			}
		}
		printf("\n");
	}
}
