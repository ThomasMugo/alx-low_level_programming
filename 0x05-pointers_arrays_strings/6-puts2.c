#include "main.h"

/**
 * puts2 - our statements are here
 * @str: our pointer
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[i++])
		j++;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
