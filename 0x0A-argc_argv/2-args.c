#include "main.h"

/**
 * main - progran that print its arguments
 * @argc: number of args
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;


	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
