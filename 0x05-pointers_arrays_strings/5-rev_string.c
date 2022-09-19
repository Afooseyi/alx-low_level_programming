#include <string.h>
#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter s
 */
void rev_string(char *s)
{
	int i = strlen(str) - 1, j = 0;
	char tmp;

	while (i > j)
	{
	tmp = str[i];
	str[i] = str[j];
	str[j] = tmp;
	i--;
	j++;
	}
}
