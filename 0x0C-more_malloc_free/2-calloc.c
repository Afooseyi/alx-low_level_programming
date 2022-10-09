#include <stdio.h>
#include <main.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory dynamically for an array.
 * @nmemb: length of the array
 * @size: size of the memory
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
