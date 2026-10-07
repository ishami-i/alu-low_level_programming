#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
    int i;
    int len = 0;
    int start;

    /* Calculate the total length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* Determine the starting index for the second half */
    if (len % 2 == 0)
    {
        start = len / 2;
    }
    /* If length is odd, formula: start = (len - 1) / 2 + 1 which equals (len + 1) / 2 */
    else
    {
        start = (len + 1) / 2;
    }

    /* Print characters from the starting point to the end of the string */
    for (i = start; i < len; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
