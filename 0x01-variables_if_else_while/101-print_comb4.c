#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b || a > b)
			{
				continue;
			}
			for (c = 0; c < 10; c++)
			{
				if (b == c || b > c)
				{
					continue;
				}
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (!(a == 7 && b == 8 && c == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
