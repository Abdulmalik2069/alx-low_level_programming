#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the firt integer to be swapped.
 * @b: the second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of the two integers.*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
