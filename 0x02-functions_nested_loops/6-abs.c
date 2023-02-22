#include "main.h"
/**
 *  _abs - function for absolute value
 *
 *  @a: peremeter to be checked
 *
 *  Return: always 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
