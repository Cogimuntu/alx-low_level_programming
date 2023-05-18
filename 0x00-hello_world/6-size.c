#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	/**
	*int CHAR = sizeof(a);
	*int INT = sizeof(5);
	*int LONGINT= sizeof();
	*long long = sizeof();
	*int FLOAT = sizeof(3.5);
	*/
	printf("Size of a char: %zu byte\(s\)\n", sizeof(char));
	printf("Size of a int: %zu byte\(s\)\n", sizeof(int));
	printf("Size of a long int: %zu byte\(s\)\n", sizeof(long));
	printf("Size of a long long int: %zu byte\(s\)\n", sizeof(long long));
	printf("Size of a float: %zu byte\(s\)\n", sizeof(int));

	return (0);
}
