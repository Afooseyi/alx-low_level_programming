#include <stdio.h>
#include "main.h"

/**
 * puts - prints a string
 * @str: string to print
 *
 * Description: prints a string 
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + 1));
		i++;
	}
	putchar(10);
}
