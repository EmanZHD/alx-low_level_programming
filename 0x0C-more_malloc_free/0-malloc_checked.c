#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -allocates memory
 * @a: argument
 * Return: void
 */

void *malloc_checked(unsigned int a)
{

	int *p;

	p = malloc(a);

	if (!p)
	{

		exit(98);

	}

	return (p);

}
