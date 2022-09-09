#include <stdio.h>

/**
 * main - our functions will be here
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	char x;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
