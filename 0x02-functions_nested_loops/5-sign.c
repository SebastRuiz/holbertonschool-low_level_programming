#include "holberton.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The character to print.
 * Return: Returns 1 and prints + if n is greater than zero, returns 0 and
 * prints 0 if n is zero, returns -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
