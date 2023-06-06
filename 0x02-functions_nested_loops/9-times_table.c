#include "main.h"
/**
 * times_table - prints multiplication table of 9
 */
void times_table(void)
{
	int dg1, dg2;

	for (dg1 = 0; dg1 < 10; dg1++)
	{
		for (dg2 = 0; dg2 < 10; dg2++)
		{
			printf("%d,  ", dg1 * dg2);
		}
		printf("\n")
	}
}
