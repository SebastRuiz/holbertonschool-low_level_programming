#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	char s;

	for (n = 'a' ; n <= 'z' ; n++)
	putchar (n);
	for (s = 'A' ; s <= 'Z' ; s++)
	putchar (s);
	putchar ('\n');
	return (0);
}
