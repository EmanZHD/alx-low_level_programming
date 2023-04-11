#include "main.h"

/**
 * main - print the number of its arguments
 * @argc: number of args
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;


	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{

		i = 0;
		while (*argv != NULL)
		{

			i++;
			argv++;

		}
		printf("%d\n", i - 1);
	}
	return (0);
}
