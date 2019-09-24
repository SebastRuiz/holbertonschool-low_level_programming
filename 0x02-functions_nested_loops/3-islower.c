#include "holberton.h"
/**
 * _islower - Check if there are lowercase characters.
 * @c: The character to print.
 * Return: Returns 1 is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);

	return (0);
}
