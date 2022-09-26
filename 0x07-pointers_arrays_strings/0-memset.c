#include "main.h"

/**
 * _memset - our fills memory with a constant byte
 * @s: our pointer
 * @b: our char
 * @n: our unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(s + i) = b;
	}
	return (s);
}
