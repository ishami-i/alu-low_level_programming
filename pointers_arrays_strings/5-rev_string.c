#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from the outsides moving inward */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
