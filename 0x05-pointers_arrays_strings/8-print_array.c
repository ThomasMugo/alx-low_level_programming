#include "main.h"
#include <stdio.h>

/**
 * print_array - our statements are here
 * @a: our pointer
 * @n: our character
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
