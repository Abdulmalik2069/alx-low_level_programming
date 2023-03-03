#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destinatin string
 * @src: source of string
 * @n: number of characters to be append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0, j = destlen;
			i < n && dest[i] != '\0' && src[i] != '\0';
			i++, j++)
		dest[j] = src[i];
	return (dest);
}
