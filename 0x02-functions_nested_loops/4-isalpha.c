#include "main.h"
/**
 * _isalpha - checks if character is alphabetic
 * @c: the character to be checked
 *
 * Return: 0 if is a letter, lower or upper, otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
