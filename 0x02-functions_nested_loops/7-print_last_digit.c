#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The character to print.
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int s;
s = (n % 10);
	if (n > 0)
	{
		_putchar(s + '0');
	}
	else
	{
		s = s * -1;
		_putchar(s + '0');
	}
	return (s);
}
