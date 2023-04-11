#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int i = 1, j, res = 0;


	while (i < argc)
	{

		j = 0;
		while (argv[i][j] != '\0')
		{

			if (argv[i][j] < '0' || argv[i][j] > '9')
			{

				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
