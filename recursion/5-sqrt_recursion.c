#include "main.h"

/**
 * find_sqrt - Helper function to find the natural square root.
 * @n: The number to find the square root of.
 * @i: The iterator being tested as a root candidate.
 *
 * Return: The square root if found, or -1 if it doesn't exist.
 */
int find_sqrt(int n, int i)
{
	/* Base case: if i squared equals n, we found the square root */
	if (i * i == n)
	{
		return (i);
	}

	/* Base case: if i squared exceeds n, n has no natural square root */
	if (i * i > n)
	{
		return (-1);
	}

	/* Recursive step: increment i to test the next number */
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	/* Error case: negative numbers do not have real square roots */
	if (n < 0)
	{
		return (-1);
	}

	/* Call the helper function starting with an initial guess of 1 */
	return (find_sqrt(n, 1));
}

