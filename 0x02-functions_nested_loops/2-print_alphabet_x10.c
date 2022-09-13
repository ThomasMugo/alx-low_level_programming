#include "main.h"

/**
 *print_alphabet_x10 - our statements are here
 */
void print_alphabet_x10(void)
{
	char x;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
