#include "main.h"

/**
 * print_line - draw a straight line according to parameter
 * @n: the number of lines to draw
 * Return:empty
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a < n ; a++)
	{
		_putchar(95);
	}
		_putchar('\n');
	}
}
