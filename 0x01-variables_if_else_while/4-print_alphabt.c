#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s;

	for (s = 'a' ; s <= 'z' ; s++)
	{
	if (s != 'q' && s != 'e')
	{
	putchar (s);
	}
	}
	putchar ('\n');
return (0);

}
