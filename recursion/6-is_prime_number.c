#include "main.h"

/**
 * check_prime - Helper function to recursively check for divisors.
 * @n: The number to check.
 * @i: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int check_prime(int n, int i)
{
	/* Base case: if n is divisible by i, it's not a prime number */
	if (n % i == 0)
	{
		return (0);
	}

	/* Base case: if i exceeds half of n, no divisors exist; it is prime */
	if (i * i > n)
	{
		return (1);
	}

	/* Recursive step: test the next divisor */
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Numbers less than or equal to 1 are not prime */
	if (n <= 1)
	{
		return (0);
	}

	/* Start checking for divisors beginning with 2 */
	return (check_prime(n, 2));
}

