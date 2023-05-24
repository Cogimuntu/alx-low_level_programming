#include  "main.h"
/**
 *main -Print _putchar follows by a new line
 *Description: You are not allowed to use standard libraries
 *Return: 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putcha(putchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
