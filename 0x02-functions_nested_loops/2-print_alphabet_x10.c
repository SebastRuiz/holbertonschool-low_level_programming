#include "holberton.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 * -putchar - Only use twice in your code
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
