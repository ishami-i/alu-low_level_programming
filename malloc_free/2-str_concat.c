#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space containing s1 + s2,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0, len2 = 0;
	int i, j;

	/* Treat NULL inputs as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* Allocate precise memory: len1 + len2 + 1 for null-terminator */
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	/* Copy s1 into s */
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	/* Append s2 into s */
	for (j = 0; j < len2; j++)
	{
		s[i + j] = s2[j];
	}

	/* Add the terminating null byte */
	s[i + j] = '\0';

	return (s);
}
