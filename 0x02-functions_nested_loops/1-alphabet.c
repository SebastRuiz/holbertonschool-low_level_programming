#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 * _putchar - Only use twice in your code.
 * Return: 0
 */
void print_alphabet(void)
{
	int n;
	for (n = 'a' ; n <= 'z' ; n++)
		_putchar (n);
	_putchar ('\n');
}
