#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and 
 * initializes it with a specific char
 * @size: array size
 * @c: our character
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			c[i] = c;
			return (a);
		}
	}
}
