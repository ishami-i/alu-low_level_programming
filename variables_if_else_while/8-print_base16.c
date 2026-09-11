#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int i;

	/* Loop from character '0' to character '9' */
	for (i = '0'; i <= '9'; i++)
		putchar(i);

	/* Loop from character 'a' to character 'f' */
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
