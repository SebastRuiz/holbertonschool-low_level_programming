#include "holberton.h"
/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to print.
 * Return: Returns 1 if is a letter lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	return (1);
	else
return (0);
}
