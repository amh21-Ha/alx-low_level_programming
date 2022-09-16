#include "main.h"

void print_integer(int m);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 *  Return: Nothing
 */

void print_number(int n)
{
	unsigned int y;
	/* if condition */
	y = n;
	if (n < 0)
	{	_putchar(45);
		y = -n;
	}
	if (y / 10)
	{
		print_number(y / 10);
	}
	_putchar((y % 10) + '0');
}
