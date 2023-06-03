#include "main.h"
/**
 * print_sign - outputs the sign of a number if negative,xero, positive
 *
 * @n: number to be checked
 *
 * Return: 1 if n is greter than 0, 0 if n is 0 and -1 if n is les 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
}
