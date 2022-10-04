#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - this function allocates space in memory for a copy of the
 * string given as a parameter
 * @str: string to be copied
 * Return: if successful, a pointer to the duplicated string; Null if
 * failed or insufficient memory was allocated
 */
char *_strdup(char *str)
{
	int size = 0;
	char *strCopy;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	strCopy = malloc(size * sizeof(*str) + 1);

	if (strCopy == 0)
		return (NULL);

	strcpy(strCopy, str);
	return (strCopy);
}
