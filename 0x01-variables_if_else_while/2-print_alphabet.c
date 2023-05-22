#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if success or 1 if negative
 */

int main(void)
{

	/* Get the character to be written*/
	char ch = 'a';

	/* Write the Character to stdout*/
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
