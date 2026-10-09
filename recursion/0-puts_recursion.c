#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
        /* Base case: if we reach the end of the string, print newline and stop */
        if (*s == '\0')
        {
                _putchar('\n');
                return;
        }

        /* Print the current character */
        _putchar(*s);

        /* Recursive call: move to the next character in the string */
        _puts_recursion(s + 1);
}
