#include "main.h"

/**
 * _isalpha - function that check if c alpha or not
 * Return: zero as a value if c isn't alpha and non zero if it's 
 * @c: is input
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
