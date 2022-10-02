#include <stdio.h>

/**
  * main - prints program name
  * @argc: number of arguments
  * @argv: argument array
  * Return: 0 if successful
  */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		(void) argc;
		printf("%S\n", *argv);
		argv++;
	}
	return (0);
}
