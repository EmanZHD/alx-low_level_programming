#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * deqcription: prints a string
 * on success: return the number of characters printed
 */
void _puts(char *str)
{
	if (str)
		while (*str != '\0')
			_putchar(*str++);
	_putchar('\n');
}
