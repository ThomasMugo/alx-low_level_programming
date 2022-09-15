#include "main.h"

/**
 * more_numbers - our statements are here
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar(1 % 10 + '0');
		}
		_putchar('\n');
	}
}
