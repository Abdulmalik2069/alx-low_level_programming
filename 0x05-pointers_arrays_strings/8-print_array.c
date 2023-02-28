#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of a n array of saving
 * @a: Array of integer
 * @n: number of element of the array to be printed
 * Return: empty
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

	if (j != (n - 1))
	{
		printf(", ");
	}
	}
		printf("\n");
}
