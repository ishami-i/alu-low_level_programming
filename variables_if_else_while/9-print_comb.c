#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0'); /* Convert integer to its character equivalent */

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n'); /* Add a new line at the end */

	return (0);
}
