#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: he string to duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, a;

	i = 0;
	a = 0;

	if (str == NULL)
		return (NULL);

	while (str[a])
	{
		a++;
	}

	s = malloc(sizeof(char) *(a + 1));

	if (s == NULL)
		return (NULL);

	while ((s[i] = str[i]) != '\0')
		i++;

	return (s);
}
