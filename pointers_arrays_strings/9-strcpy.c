#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Loop through the source string until the null byte */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the terminating null byte explicitly */
	dest[i] = '\0';

	return (dest);
}
