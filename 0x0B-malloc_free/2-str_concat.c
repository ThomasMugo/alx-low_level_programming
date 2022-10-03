#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: our first string
 * @s2: our second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *c;

	if (s == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	c = malloc(k * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		c[l] = s1[l];
	for (l = 0; l < j; l++)
		c[l + i] = s2[l];
	c[i + j] = '\0';
	return (c);
}
