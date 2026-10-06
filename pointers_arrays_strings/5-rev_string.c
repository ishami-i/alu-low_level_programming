#include "main.h"

void rev_string(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}
	char temp[length] = s;

	for(i = length - 1; i >= 0; i--)
	{
		for(int j = 0; j < length; j++)
		{
			s[j] = temp[i];
		}
	}
}
