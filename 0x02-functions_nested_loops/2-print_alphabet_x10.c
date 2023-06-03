#include  "main.h"

/**
 * print_alphabet_x10 - prints 10times the alphabet followed by anew line
 *
 */
void print_alphabet_x10(void);
{
	char lett;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
	}
	putchar('\n');
}

