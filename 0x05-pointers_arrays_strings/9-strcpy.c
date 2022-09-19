#include "main.h"

/**
 * _strcpy - our statements are here
 * @src: our source
 * @dest: our destination
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
<<<<<<< HEAD
=======
	*(dest + i) = '\0';
>>>>>>> e749e622eec6fa0d05eef5c71965272e03baff11
	return (dest);
}
