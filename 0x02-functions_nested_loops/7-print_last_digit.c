#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: the number
 * Return: 0 if successful and 1 if otherwise
 */
int print_last_digit(int c)
{
	int sum;
	
	if (c < 0)
	{
		c = -c;
	}
	else
	{
		c = c;
	}

	sum =  (c % 10);
	return (sum);
}
