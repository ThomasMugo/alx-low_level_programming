#include "main.h"

/**
 * puts2 - our statements are here
 * @str: our pointer
 */
void puts2 (char *str)
{
	int i = 0;

	while (*(str + 1))
	{
		_putchar(*(str + 1));
		i = i + 2;
	}
	_putchar('\n');
}
