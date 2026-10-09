#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is lower than 0.
 */
int factorial(int n)
{
	/* Error case: factorial of negative numbers is not defined */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: factorial of 0 or 1 is 1 */
	if (n <= 1)
	{
		return (1);
	}

	/* Recursive step: multiply n by the factorial of (n - 1) */
	return (n * factorial(n - 1));
}

