#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
	{
		if (a <= 9)
			putchar('0' + a);
		else
			putchar('a' + (a - 10));
	}
	putchar('\n');
	return (0);
}
