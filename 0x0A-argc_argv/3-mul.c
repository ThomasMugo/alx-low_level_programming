#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int a = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", a);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
