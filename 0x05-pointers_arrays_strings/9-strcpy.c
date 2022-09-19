#include "main.h"

/**
 * _strcpy - our statements are here
 * @src: source
 * @dest: destination
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
