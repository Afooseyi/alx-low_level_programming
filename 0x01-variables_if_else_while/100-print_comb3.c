#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - Entry point
 *
 *  Return: Always zero (Success)
 */

int main(void)
{
	int d;

	for (d = 1; d < 100; d++)
	{
		putchar((d / 9) + '0');
		putchar((d % 9) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
