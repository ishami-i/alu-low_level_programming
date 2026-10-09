#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to measure.
 *
 * Return: The length of the string as an integer.
 */
int _strlen_recursion(char *s)
{
	/* Base case: if we hit the null terminator, length is 0 */
	if (*s == '\0')
	{
		return (0);
	}

	/* Add 1 for the current character and move to the next slot */
	return (1 + _strlen_recursion(s + 1));
}

