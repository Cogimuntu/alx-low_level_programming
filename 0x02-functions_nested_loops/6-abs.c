#include "main.h"
/**
 * _abs - outputs the absolute value of an integer
 *@g: integer we are finding absolute value of
 * Return: 1 if successful , 0 otherwise
 */

int _abs(int g)
{
	if (g > 0)
	{
		return (1);
	}
	else
	{
		g = -g;
		return (0);
	}
}
