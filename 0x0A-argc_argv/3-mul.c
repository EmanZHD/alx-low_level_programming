#include "main.h"

/**
 * main - program that  print the result of the multiplication
 * @argc: number of args
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{

	int a;
	int b;
	int res;

	if (argc <= 2)
	{

		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
}
