#include "main.h"

/**
 * _isalpha - our statements are here
 * @c: our character
 * Return: 1 if lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
