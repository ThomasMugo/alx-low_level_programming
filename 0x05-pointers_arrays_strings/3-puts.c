#include "main.h"

/**
 * _puts - our statements are here
 * @str: out pointer
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
