#include "main.h"

/**
 * _isdigit - our statements are here
 * @c: our character
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	} else
	{
		return (0);
	}
}
