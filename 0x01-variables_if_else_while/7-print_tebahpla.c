#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if success or 1 if negative
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
