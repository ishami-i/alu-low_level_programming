#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
