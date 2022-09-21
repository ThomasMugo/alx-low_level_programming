#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: our pointer
 * @src: our pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
