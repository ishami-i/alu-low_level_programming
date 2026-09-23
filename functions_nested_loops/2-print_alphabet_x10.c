#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	for(int i = 0; i < 10; i++) {
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter); /* First _putchar call */
		}
		_putchar('\n'); /* Second _putchar call */
	}
}
