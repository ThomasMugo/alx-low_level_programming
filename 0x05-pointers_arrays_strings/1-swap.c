#include "main.h"

/**
 * swap_int - our statements are here
 * @a: our pointer
 * @b: our pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
