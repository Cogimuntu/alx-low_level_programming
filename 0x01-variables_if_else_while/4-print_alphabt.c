#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if positive or 1 if negative
 */
int main(void)
{	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
