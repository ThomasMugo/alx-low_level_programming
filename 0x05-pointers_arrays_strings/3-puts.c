#include "main.h"

/**
 * _puts - our statements are here
 * @str: out pointer
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
