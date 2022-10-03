#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated space in mem
 * @str: our string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	c = malloc(i * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
