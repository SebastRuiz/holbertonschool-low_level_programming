#include "holberton.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The character to print.
 * Return: 0
 */
int _abs(int n)
{
int c;
if (n > 0)
{
c = n;
}
else
{
c = n * -1;
}
return (c);
}
