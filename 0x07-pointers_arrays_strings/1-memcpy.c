#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory with itis stored
 * @src: memory where it is coppied
 * @n: number of bytes
 * Return: copied memory with a byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
