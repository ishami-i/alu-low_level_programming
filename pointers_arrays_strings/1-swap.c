#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;  /* Save the value that 'a' points to into temp */
	*a = *b;    /* Copy the value that 'b' points to into 'a''s address */
	*b = temp;  /* Copy the saved value from temp into 'b''s address */
}
