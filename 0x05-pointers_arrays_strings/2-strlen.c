#include "main.h"

/**
 * _strlen - our statements are here
 * @s: our pointer
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
