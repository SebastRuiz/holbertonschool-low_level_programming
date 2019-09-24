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
		s = (n % 10);
		_putchar(s + '0');
	}
	else
	{
		s = ((n * -1) % 10);
		_putchar(s + '0');
	}
	return (s);
}
