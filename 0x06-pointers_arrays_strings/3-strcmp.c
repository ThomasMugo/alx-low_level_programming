#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: our pointer
 * @s2: our pointer
 * Retrn: output
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
