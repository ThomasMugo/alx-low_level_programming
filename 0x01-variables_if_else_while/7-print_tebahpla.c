#include <stdio.h>

/**
 * main - our functions will be here
 * Return: 0 if successful
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
