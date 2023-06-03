#include <stdio.h>
/**
 * main - Entry point
 *
 *Return : 0 if successful or 1 if an error occurred
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		/**
		 * expression '0' + a converts integer a
		 * to coreesponding character representation
		 */
	}
	putchar('\n');
	return (0);
}
