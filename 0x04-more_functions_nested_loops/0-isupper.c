#include "holberton.h"
/**
 * _isupper - Checks for uppercase character.
 * @c: The character to print.
 * Return: Returns 1 if is uppercase, returns 0 otherwise.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
