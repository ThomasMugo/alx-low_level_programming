#include "main.h"

/**
 * _strcpy - our statements are here
 * @src: our source is here
 * @dest: our destination is here
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
