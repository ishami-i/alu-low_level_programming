#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int i; /* Declare i here to comply with C89/C90 standards */
	
	/* Loop from character '0' to character '9' */
	for (i = '0'; i <= '9'; i++)
		putchar(i);

	/* Loop from character 'a' to character 'f' */
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
