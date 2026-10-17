#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
	char *s;
	int length = 0;
	int i;

	/* 1. Check if the input string is NULL */
	if (str == NULL)
		return (NULL);

	/* 2. Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* 3. Allocate memory for the new string (including '\0') */
	s = malloc(sizeof(char) * (length + 1));

	/* 4. Check if malloc failed */
	if (s == NULL)
		return (NULL);

	/* 5. Copy the string */
	for (i = 0; i <= length; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
