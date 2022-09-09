#include <stdio.h>

/**
 * main - our functions go here
 * Return: 0 if successful
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar ('\n');
	return (0);
}
