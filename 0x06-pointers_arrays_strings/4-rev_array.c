#include "main.h"

/**
 * reverse_array - reverse our array
 * @a: our pointer
 * @n: our int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i= 0;
	int t;

	n = n - 1;

	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
