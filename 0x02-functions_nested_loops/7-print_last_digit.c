#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The character to print.
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int s;

	if (n > 0)
	{
		_putchar(n % 10);
		s = (n % 10);
	}
	else
	{
		_putchar((n * -1) % 10);
		s = ((n * -1) % 10);
	}
return (s);
}
