#include "main.h"

/**
 * _strncpy - copy our string
 * @dest: our pointer
 * @src: our pointer
 * @n: our int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
