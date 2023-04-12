#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value in a sorted
 * array of integers give back the index of the first value in the array
 * if this value appears more than once in the array
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    int mid = (size - 1) / 2;
    int mid_value = array[mid];

    printf("Searching in array: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    if (mid_value == value)
    {
        while (mid > 0 && array[mid - 1] == value)
            mid--;
        return (mid);
    }
    else if (mid_value > value)
    {
        return (advanced_binary(array, mid, value));
    }
    else
    {
        int result = advanced_binary(array + mid + 1, size - mid - 1, value);
        if (result >= 0)
            result += mid + 1;
        return (result);
    }
}
