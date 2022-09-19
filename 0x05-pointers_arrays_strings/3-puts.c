#include "main.h"

/**
 * _puts - our statements are here
 * @str: out pointer
 */
void _puts(char *str)
{
	while (*str)
	{
		_puts(*str++);
	}
	_putchar('\n');
}
