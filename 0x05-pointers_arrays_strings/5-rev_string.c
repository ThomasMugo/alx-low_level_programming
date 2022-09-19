#include "main.h"

/**
 * rev_string - our statements are here
 * @s: out pointer
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;

	while (s[i++])
	{
		c++;
	}
	for (i = j - 1; i >= j / 2; i--)
	{
		c = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = c;
	}
}
