#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory where is stored
 * @src:source of memory where is copied
 * @n: length of src
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		*(char *)(dest + j) = *(char *)(src + i);
		i++;
		j++;
	}
	return (dest);
}
